#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_METHOD_2_3A6EAEC1E1F15C04_OFFSET UNITYSDK_OFFSET(0x172869C0)
#define RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17286D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageTemplateConfig_TypeDefinitionIndex = 16667;

	class GridFightStageTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightWaveInfo*>* GridFightWaveList; // 0x10
		::System::String* ActiveBattleTemplate; // 0x18
		::Il2CppArray<::RPG::GameCore::GridFightBattleTemplate*>* BattleTemplateList; // 0x20
		::System::Boolean DisableAllStolenRule; // 0x28
		::System::Boolean DisableStolenRefundFromSell; // 0x29
		::System::Boolean DisableStolenRefundFromHold; // 0x2A
		::System::Boolean DisableStolenRefundFromInitialPurchase; // 0x2B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A6EAEC1E1F15C04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightStageTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_METHOD_2_3A6EAEC1E1F15C04_OFFSET))(a1, a2);
		}
	};
}
