#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CharacterEffect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x8ADB740)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8ADC6A0)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x8ADBC20)
#define CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ADC2B0)

inline static constexpr unsigned int Class_2_86A6044601A0FA5A_Class_1_6EDBC2C7855F88CE_TypeDefinitionIndex = 57149;

class Class_2_86A6044601A0FA5A_Class_1_6EDBC2C7855F88CE : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::RPG::Client::CharacterEffect* Field_1_5; // 0x18
	::UnityEngine::Material* Field_1_3; // 0x20
	::UnityEngine::Transform* Field_1_1; // 0x28
	::UnityEngine::Material* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_0; // 0x38

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3, ::System::Single a4, ::RPG::Client::CharacterEffect* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Single, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86A6044601A0FA5A_CLASS_1_6EDBC2C7855F88CE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
