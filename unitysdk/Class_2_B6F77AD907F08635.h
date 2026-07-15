#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_970978B79A041885.h"
#include "unitysdk/Struct_2_44EC5CE538089376.h"

class Class_0_16E4307DCC419505_53;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_B6F77AD907F08635_METHOD_2_2B193FA14AE75DE8_OFFSET UNITYSDK_OFFSET(0x190E5430)
#define CLASS_2_B6F77AD907F08635_METHOD_2_421D8502920A8E2D_OFFSET UNITYSDK_OFFSET(0x190E4E90)
#define CLASS_2_B6F77AD907F08635_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x190E5B50)
#define CLASS_2_B6F77AD907F08635__CTOR_OFFSET UNITYSDK_OFFSET(0x190E4DF0)

inline static constexpr unsigned int Class_2_B6F77AD907F08635_TypeDefinitionIndex = 35351;

class Class_2_B6F77AD907F08635 : public ::Class_1_970978B79A041885
{
public:
	::System::Collections::Generic::Queue_1<::Struct_2_44EC5CE538089376>* Field_2_0; // 0x18
	::RPG::Client::RPGProfilerMarker* Field_2_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_53*))((::PBYTE)hIl2Cpp + CLASS_2_B6F77AD907F08635__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_421D8502920A8E2D(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6F77AD907F08635_METHOD_2_421D8502920A8E2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B193FA14AE75DE8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B6F77AD907F08635_METHOD_2_2B193FA14AE75DE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_44EC5CE538089376 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_44EC5CE538089376))((::PBYTE)hIl2Cpp + CLASS_2_B6F77AD907F08635_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}
};
