#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_METHOD_5_5AFB73477BDE8482_OFFSET UNITYSDK_OFFSET(0xDC277C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDC28470)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopDraggedChimeraSlotView_TypeDefinitionIndex = 77887;

	class ChimeraDuelShopDraggedChimeraSlotView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DragZ; // 0x18
		::UnityEngine::Transform* DragHandle; // 0x20
		::UnityEngine::Vector2 PickOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* Method_5_5AFB73477BDE8482()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPDRAGGEDCHIMERASLOTVIEW_METHOD_5_5AFB73477BDE8482_OFFSET))(this);
		}
	};
}
