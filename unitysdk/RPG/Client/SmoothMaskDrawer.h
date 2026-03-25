#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class SmoothMaskDrawerBehavior; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_SMOOTHMASKDRAWER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA4A2720)
#define RPG_CLIENT_SMOOTHMASKDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A27B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SmoothMaskDrawer_TypeDefinitionIndex = 58193;

	class SmoothMaskDrawer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SmoothMaskDrawerBehavior*>
	{
	public:
		::UnityEngine::Material* Material; // 0x30
		::UnityEngine::Vector2Int Resolution; // 0x38
		::UnityEngine::Vector2 ResolutionRatio; // 0x40
		::RPG::Client::SmoothMaskDrawerBehavior* Field_7_3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWER__CTOR_OFFSET))(this);
		}

		::RPG::Client::SmoothMaskDrawerBehavior* get_Behavior()
		{
			return ((::RPG::Client::SmoothMaskDrawerBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWER_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
