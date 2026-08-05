#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIHollowItemCollectWidgetController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFF00)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SHOWEFFECTATPOS_G__GETEFFECLAYERCONFIG_0_OFFSET UNITYSDK_OFFSET(0x190EFF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 54638;

	class UIHollowItemCollectWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* localCopy; // 0x10
		::MoleMole::UIHollowItemCollectWidgetController* __4__this; // 0x18
		::System::Int32 showCount; // 0x20
		::System::Single A; // 0x24
		::System::Int32 localType; // 0x28
		::System::Single B; // 0x2C
		::System::Int32 waitCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* _ShowEffectAtPos_g__GetEffecLayerConfig_0(::UnityEngine::Vector2 offset)
		{
			return ((::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SHOWEFFECTATPOS_G__GETEFFECLAYERCONFIG_0_OFFSET))(this, offset);
		}
	};
}
