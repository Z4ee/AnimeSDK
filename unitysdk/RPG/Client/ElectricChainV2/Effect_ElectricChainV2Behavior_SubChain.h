#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainShapeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Line; }
namespace RPG::Client::ElectricChainV2 { class RandomUpdater; }
namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_SUBCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18E150A0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_SubChain_TypeDefinitionIndex = 70178;

	class Effect_ElectricChainV2Behavior_SubChain : public ::System::Object
	{
	public:
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType from; // 0x10
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType to; // 0x14
		::UnityEngine::GameObject* obj; // 0x18
		::UnityEngine::LineRenderer* renderer; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x28
		::RPG::Client::ElectricChainV2::Shape* emitter; // 0x30
		::RPG::Client::ElectricChainV2::Shape* receiver; // 0x38
		::RPG::Client::ElectricChainV2::Line* line; // 0x40
		::RPG::Client::ElectricChainV2::RandomUpdater* updater; // 0x48
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ElectricChainV2::Shape*, ::System::Single>>* pointOnMainChains; // 0x50

		::System::Void _ctor(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType a1, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType a2, ::UnityEngine::GameObject* a3, ::UnityEngine::LineRenderer* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType, ::UnityEngine::GameObject*, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_SUBCHAIN__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
