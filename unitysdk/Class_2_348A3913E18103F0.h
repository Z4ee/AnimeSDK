#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_1C6778AE6D99DECB;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_348A3913E18103F0_METHOD_2_6A0DE550D4E28A8B_OFFSET UNITYSDK_OFFSET(0x124C6E60)
#define CLASS_2_348A3913E18103F0__CTOR_OFFSET UNITYSDK_OFFSET(0x124C6F50)
#define CLASS_2_348A3913E18103F0__ONBIND_OFFSET UNITYSDK_OFFSET(0x124C6AA0)
#define CLASS_2_348A3913E18103F0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x124C6FA0)

inline static constexpr unsigned int Class_2_348A3913E18103F0_TypeDefinitionIndex = 66491;

class Class_2_348A3913E18103F0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_2 = 0x3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::Il2CppArray<::Class_2_1C6778AE6D99DECB*>* Field_2_1; // 0x68
	::System::Int32 Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_348A3913E18103F0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_348A3913E18103F0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6A0DE550D4E28A8B(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_348A3913E18103F0_METHOD_2_6A0DE550D4E28A8B_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_348A3913E18103F0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
