#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_1049829BF7973998_METHOD_1_17860AFFD60623CD_OFFSET UNITYSDK_OFFSET(0x15A32CA0)
#define CLASS_1_1049829BF7973998_METHOD_1_2368DC437C086A5C_OFFSET UNITYSDK_OFFSET(0x15A32A20)
#define CLASS_1_1049829BF7973998_METHOD_1_E348B45B44E23BC8_OFFSET UNITYSDK_OFFSET(0x15A328C0)
#define CLASS_1_1049829BF7973998__CTOR_OFFSET UNITYSDK_OFFSET(0x15A32F50)

inline static constexpr unsigned int Class_1_1049829BF7973998_TypeDefinitionIndex = 74616;

class Class_1_1049829BF7973998 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1049829BF7973998__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_E348B45B44E23BC8(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1049829BF7973998_METHOD_1_E348B45B44E23BC8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector2 Method_1_2368DC437C086A5C(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::RPG::Client::SequentialPanelContainer::EdgeDirection a4, ::RPG::Client::SequentialPanelContainer::EdgeDirection a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Vector2 a8)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_1049829BF7973998_METHOD_1_2368DC437C086A5C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::UnityEngine::Vector3 Method_1_17860AFFD60623CD(::UnityEngine::RectTransform* a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + CLASS_1_1049829BF7973998_METHOD_1_17860AFFD60623CD_OFFSET))(this, a1, a2);
	}
};
