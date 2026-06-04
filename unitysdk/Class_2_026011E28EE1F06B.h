#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_026011E28EE1F06B_METHOD_2_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x137C87C0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_827845A152288033_OFFSET UNITYSDK_OFFSET(0x137C85D0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x137C8710)
#define CLASS_2_026011E28EE1F06B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137C8A40)
#define CLASS_2_026011E28EE1F06B_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x137C88C0)
#define CLASS_2_026011E28EE1F06B__CTOR_OFFSET UNITYSDK_OFFSET(0x137C89D0)
#define CLASS_2_026011E28EE1F06B__ONBIND_OFFSET UNITYSDK_OFFSET(0x137C8860)
#define CLASS_2_026011E28EE1F06B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x137C8A00)

inline static constexpr unsigned int Class_2_026011E28EE1F06B_TypeDefinitionIndex = 67166;

class Class_2_026011E28EE1F06B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::String* Field_2_2; // 0x68
	::System::Single Field_2_3; // 0x70
	::System::Boolean Field_2_4; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_827845A152288033(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_827845A152288033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
