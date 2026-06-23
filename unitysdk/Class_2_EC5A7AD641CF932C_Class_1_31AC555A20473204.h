#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x113D8BE0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x113D92B0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_FF9D70DA28C905A2_OFFSET UNITYSDK_OFFSET(0x113D8EF0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204__CTOR_OFFSET UNITYSDK_OFFSET(0x113D8EE0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204_TypeDefinitionIndex = 51041;

class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_2; // 0x18
	::MoleMole::UIAvatarAnimator* Field_1_4; // 0x20
	::UnityEngine::Animator* Field_1_5; // 0x28
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_1; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::MoleMole::Battle::Entity* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF9D70DA28C905A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_FF9D70DA28C905A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_31AC555A20473204_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
