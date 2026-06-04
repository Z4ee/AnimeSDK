#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7AB88D713F5121B3_48;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C7E4836FE12CD44B_METHOD_2_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x145863E0)
#define CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x14586650)
#define CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x145865B0)
#define CLASS_2_C7E4836FE12CD44B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14586720)
#define CLASS_2_C7E4836FE12CD44B__CTOR_OFFSET UNITYSDK_OFFSET(0x145866F0)
#define CLASS_2_C7E4836FE12CD44B__ONBIND_OFFSET UNITYSDK_OFFSET(0x14586260)
#define CLASS_2_C7E4836FE12CD44B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x14586790)

inline static constexpr unsigned int Class_2_C7E4836FE12CD44B_TypeDefinitionIndex = 66889;

class Class_2_C7E4836FE12CD44B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7E4836FE12CD44B_TypeDefinitionIndex)->GetStaticField(0xFAB0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7E4836FE12CD44B_TypeDefinitionIndex)->GetStaticField(0xFAB4);
	}
	::UnityEngine::Animator* Field_2_2; // 0x60
	::UnityEngine::UI::Text* Field_2_3; // 0x68
	::UnityEngine::UI::Text* Field_2_4; // 0x70
	::UnityEngine::UI::Text* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_6; // 0x80
	::UnityEngine::UI::Text* Field_2_7; // 0x88
	::UnityEngine::UI::Text* Field_2_8; // 0x90
	::System::UInt32 Field_2_9; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8D0A2531C88B32B1(::Class_1_7AB88D713F5121B3_48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_48*))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E4836FE12CD44B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
