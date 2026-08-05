#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C0C52373EF4E31DF_METHOD_1_027CC47100EB17D3_OFFSET UNITYSDK_OFFSET(0x15785C70)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_0E171545318A5F5C_OFFSET UNITYSDK_OFFSET(0x157867E0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_25749E9A651D707A_OFFSET UNITYSDK_OFFSET(0x1578A9E0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_306FF05D4DB1C493_OFFSET UNITYSDK_OFFSET(0x1578A940)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_4059B9468F0F13F2_OFFSET UNITYSDK_OFFSET(0x15788960)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_4196CC71196D06B2_OFFSET UNITYSDK_OFFSET(0x15787020)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x15787F40)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x1578AFB0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1578AFC0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x15786DE0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_59B751C564C9A7E6_OFFSET UNITYSDK_OFFSET(0x15784A30)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x157888B0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_6291D7FB932D395B_OFFSET UNITYSDK_OFFSET(0x15786960)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_795468E1CBB39124_OFFSET UNITYSDK_OFFSET(0x15784E60)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_7E4A9DA203792B94_OFFSET UNITYSDK_OFFSET(0x15787F50)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_8295FA3648427122_OFFSET UNITYSDK_OFFSET(0x15785B80)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_8AA92AC55FEF431A_OFFSET UNITYSDK_OFFSET(0x15789DE0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_91753CB9C101E315_OFFSET UNITYSDK_OFFSET(0x15787950)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_9A16FD746CDCFE2D_OFFSET UNITYSDK_OFFSET(0x1578B0D0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_A4F785003E91DF31_1_OFFSET UNITYSDK_OFFSET(0x1578ADE0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_A4F785003E91DF31_OFFSET UNITYSDK_OFFSET(0x15786610)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_AD787220AF2BBB16_OFFSET UNITYSDK_OFFSET(0x15785EC0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_C14228C7CDA45551_OFFSET UNITYSDK_OFFSET(0x1578A7E0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_C713562FBA18C4D3_OFFSET UNITYSDK_OFFSET(0x15785310)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_C7F5693B519BCA74_OFFSET UNITYSDK_OFFSET(0x15786EB0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x15786E90)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x15785AD0)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x15787E90)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x15786500)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_DC6E236300D681AD_OFFSET UNITYSDK_OFFSET(0x15786210)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_DE77C87FAF1F622E_OFFSET UNITYSDK_OFFSET(0x15789370)
#define CLASS_1_C0C52373EF4E31DF_METHOD_1_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0x1578B0E0)
#define CLASS_1_C0C52373EF4E31DF__CTOR_OFFSET UNITYSDK_OFFSET(0x157849D0)

inline static constexpr unsigned int Class_1_C0C52373EF4E31DF_TypeDefinitionIndex = 85372;

class Class_1_C0C52373EF4E31DF : public ::System::Object
{
public:
	::MoleMole::NewConfigUICommon* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::System::String* Field_1_7; // 0x30
	::Class_3_C93CC3D2C2AC4067* Field_1_1; // 0x38
	::MoleMole::CharacterScriptConfig* Field_1_3; // 0x40
	::System::UInt32 Field_1_2; // 0x48
	::UnityEngine::Vector3 Field_1_12; // 0x4C
	::System::Single Field_1_10; // 0x58
	::System::Boolean Field_1_11; // 0x5C
	::System::Single Field_1_13; // 0x60
	::System::Single Field_1_9; // 0x64
	::System::Nullable_1<::System::Single> Field_1_8; // 0x68
	::System::Single Field_1_14; // 0x70
	::System::Nullable_1<::System::Single> Field_1_15; // 0x74

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_795468E1CBB39124(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_795468E1CBB39124_OFFSET))(this, a1);
	}

	::System::Single Method_1_C713562FBA18C4D3(::MoleMole::NewConfigUICommon* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_C713562FBA18C4D3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::Transform* Method_1_027CC47100EB17D3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_027CC47100EB17D3_OFFSET))(this);
	}

	::System::Boolean Method_1_AD787220AF2BBB16(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_AD787220AF2BBB16_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_DA7D5FED1E10712C_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_0E171545318A5F5C()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_0E171545318A5F5C_OFFSET))(this);
	}

	::System::Void Method_1_59B751C564C9A7E6(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_59B751C564C9A7E6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_1_6291D7FB932D395B()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_6291D7FB932D395B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_1_C7F5693B519BCA74(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_C7F5693B519BCA74_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_DC6E236300D681AD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_DC6E236300D681AD_OFFSET))(this);
	}

	::System::Boolean Method_1_4196CC71196D06B2(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_4196CC71196D06B2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Single Method_1_8295FA3648427122(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_8295FA3648427122_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_7E4A9DA203792B94()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_7E4A9DA203792B94_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_1_A4F785003E91DF31()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_A4F785003E91DF31_OFFSET))(this);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_4059B9468F0F13F2(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_4059B9468F0F13F2_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_1_8AA92AC55FEF431A(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_8AA92AC55FEF431A_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_1_C14228C7CDA45551(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_C14228C7CDA45551_OFFSET))(this, a1);
	}

	::System::Single Method_1_DE77C87FAF1F622E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_DE77C87FAF1F622E_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_25749E9A651D707A()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_25749E9A651D707A_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_1_A4F785003E91DF31_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_A4F785003E91DF31_1_OFFSET))(this);
	}

	::System::Single Method_1_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::MoleMole::CharacterScriptConfig* Method_1_9A16FD746CDCFE2D()
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_9A16FD746CDCFE2D_OFFSET))(this);
	}

	::System::Single Method_1_91753CB9C101E315(::MoleMole::NewConfigUICommon* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_91753CB9C101E315_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_F9DAB08EC8926B1B_OFFSET))(this);
	}

	::System::Void Method_1_306FF05D4DB1C493(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C0C52373EF4E31DF_METHOD_1_306FF05D4DB1C493_OFFSET))(this, a1);
	}
};
