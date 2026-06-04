#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB868B40)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererSkinning_BoneData_TypeDefinitionIndex = 65927;

	class Effect_LineRendererSkinning_BoneData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Bone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BONEDATA__CTOR_OFFSET))(this);
		}
	};
}
