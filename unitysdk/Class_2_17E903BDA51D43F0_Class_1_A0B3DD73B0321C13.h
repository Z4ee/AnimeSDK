#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCCAFAFEDD17B2C1;
class Class_2_17E903BDA51D43F0;
namespace MoleMole { class ConfigUIUrbanMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_17E903BDA51D43F0_CLASS_1_A0B3DD73B0321C13_METHOD_1_7BFB733947F382E9_OFFSET UNITYSDK_OFFSET(0xF89B790)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_A0B3DD73B0321C13__CTOR_OFFSET UNITYSDK_OFFSET(0xF89B780)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Class_1_A0B3DD73B0321C13_TypeDefinitionIndex = 58715;

class Class_2_17E903BDA51D43F0_Class_1_A0B3DD73B0321C13 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::MoleMole::ConfigUIUrbanMap* Field_1_5; // 0x20
	::Class_1_FCCAFAFEDD17B2C1* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::UnityEngine::Camera* Field_1_7; // 0x38
	::Class_2_17E903BDA51D43F0* Field_1_1; // 0x40
	::System::Action* Field_1_8; // 0x48
	::System::Int32 Field_1_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_A0B3DD73B0321C13__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7BFB733947F382E9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_A0B3DD73B0321C13_METHOD_1_7BFB733947F382E9_OFFSET))(this, a1);
	}
};
