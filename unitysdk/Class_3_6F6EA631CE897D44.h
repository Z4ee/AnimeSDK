#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_3E9D40A4A48F0024;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_6F6EA631CE897D44_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11748410)
#define CLASS_3_6F6EA631CE897D44_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11748900)
#define CLASS_3_6F6EA631CE897D44_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x11748550)
#define CLASS_3_6F6EA631CE897D44__CTOR_OFFSET UNITYSDK_OFFSET(0x11748800)

inline static constexpr unsigned int Class_3_6F6EA631CE897D44_TypeDefinitionIndex = 76067;

class Class_3_6F6EA631CE897D44 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_3E9D40A4A48F0024* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F6EA631CE897D44__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F6EA631CE897D44_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_6F6EA631CE897D44_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F6EA631CE897D44_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
