#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_970978B79A041885.h"

class Class_0_16E4307DCC419505_53;
class Class_1_7AB88D713F5121B3_15;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_350C5DFBFCC8BFB8_METHOD_2_AB0F074CBAF39FD2_OFFSET UNITYSDK_OFFSET(0x16234CA0)
#define CLASS_2_350C5DFBFCC8BFB8_METHOD_2_B36A696DB0B81875_OFFSET UNITYSDK_OFFSET(0x162353E0)
#define CLASS_2_350C5DFBFCC8BFB8_METHOD_2_BEEA54A2CDD5CE22_OFFSET UNITYSDK_OFFSET(0x16289A00)
#define CLASS_2_350C5DFBFCC8BFB8__CTOR_OFFSET UNITYSDK_OFFSET(0x162359F0)

inline static constexpr unsigned int Class_2_350C5DFBFCC8BFB8_TypeDefinitionIndex = 36213;

class Class_2_350C5DFBFCC8BFB8 : public ::Class_1_970978B79A041885
{
public:
	::RPG::Client::RPGProfilerMarker* PKCMNIGPGKE; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_53*))((::PBYTE)hIl2Cpp + CLASS_2_350C5DFBFCC8BFB8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_BEEA54A2CDD5CE22(::Class_1_7AB88D713F5121B3_15* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_15*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_350C5DFBFCC8BFB8_METHOD_2_BEEA54A2CDD5CE22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B36A696DB0B81875(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_350C5DFBFCC8BFB8_METHOD_2_B36A696DB0B81875_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB0F074CBAF39FD2(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_350C5DFBFCC8BFB8_METHOD_2_AB0F074CBAF39FD2_OFFSET))(this, a1, a2, a3);
	}
};
