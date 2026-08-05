#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCCAFAFEDD17B2C1;
class Class_2_2B69BCB161EF3587;
namespace MoleMole { class ConfigUIUrbanMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2B69BCB161EF3587_CLASS_1_A0B3DD73B0321C13_METHOD_1_7BFB733947F382E9_OFFSET UNITYSDK_OFFSET(0x1413A0D0)
#define CLASS_2_2B69BCB161EF3587_CLASS_1_A0B3DD73B0321C13__CTOR_OFFSET UNITYSDK_OFFSET(0x1413A0C0)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_Class_1_A0B3DD73B0321C13_TypeDefinitionIndex = 75488;

class Class_2_2B69BCB161EF3587_Class_1_A0B3DD73B0321C13 : public ::System::Object
{
public:
	::MoleMole::ConfigUIUrbanMap* Field_1_5; // 0x10
	::UnityEngine::Camera* Field_1_11; // 0x18
	::Class_2_2B69BCB161EF3587* Field_1_1; // 0x20
	::UnityEngine::GameObject* Field_1_2; // 0x28
	::UnityEngine::Transform* Field_1_0; // 0x30
	::Class_1_FCCAFAFEDD17B2C1* Field_1_7; // 0x38
	::System::Action* Field_1_10; // 0x40
	::System::String* Field_1_6; // 0x48
	::System::Int32 Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_1_A0B3DD73B0321C13__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7BFB733947F382E9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_1_A0B3DD73B0321C13_METHOD_1_7BFB733947F382E9_OFFSET))(this, a1);
	}
};
