#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigHollowChessboard_GeneralRange2RangeGroupConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAA270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectEffectConfig_TypeDefinitionIndex = 43419;

	class ConfigHollowChessboard_ItemCollectEffectConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_GeneralRange2RangeGroupConfig* EffectCount; // 0x10
		::System::String* EffectTextureSheetKey; // 0x18
		::UnityEngine::Color FadeOutColor; // 0x20
		::MoleMole::ItemCollectEffectType ItemCollectEffectType; // 0x30
		::System::Int32 EffectSize; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
