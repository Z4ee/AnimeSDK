#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdLod.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_CROWDANIMATOR_CROWDVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB2F0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdVariant_TypeDefinitionIndex = 73633;

	class CrowdVariant : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>* LodGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDVARIANT__CTOR_OFFSET))(this);
		}
	};
}
