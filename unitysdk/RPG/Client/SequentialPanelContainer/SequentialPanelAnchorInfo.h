#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/AlignmentType.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/Direction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE072E70)

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int SequentialPanelAnchorInfo_TypeDefinitionIndex = 74613;

	class SequentialPanelAnchorInfo : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* AnchorPoint; // 0x10
		::RPG::Client::SequentialPanelContainer::AlignmentType Alignment; // 0x18
		::System::Single Spacing; // 0x1C
		::UnityEngine::Vector2 Offset; // 0x20
		::RPG::Client::SequentialPanelContainer::AlignmentType AnchorPointAlignment; // 0x28
		::RPG::Client::SequentialPanelContainer::Direction Direction; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELANCHORINFO__CTOR_OFFSET))(this);
		}
	};
}
