#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_AbyssShineControl; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_CRYSTALTRANSFORMSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4B280)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssCrystalManager_CrystalTransformStruct_TypeDefinitionIndex = 70386;

	class Effect_AbyssCrystalManager_CrystalTransformStruct : public ::System::Object
	{
	public:
		::UnityEngine::Transform* UINode; // 0x10
		::UnityEngine::Animator* CrystalAnimator; // 0x18
		::RPG::Client::Effect_AbyssShineControl* ShineScript; // 0x20
		::UnityEngine::Material* CrystalMat; // 0x28
		::System::Single CrystalWeight; // 0x30
		::System::Single ShineWeight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSCRYSTALMANAGER_CRYSTALTRANSFORMSTRUCT__CTOR_OFFSET))(this);
		}
	};
}
