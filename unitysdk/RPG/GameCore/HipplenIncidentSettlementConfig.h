#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_METHOD_2_CB4A8653690E2D25_OFFSET UNITYSDK_OFFSET(0x1B687AA0)
#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_METHOD_2_EBF485A848324438_OFFSET UNITYSDK_OFFSET(0x1B688C50)
#define RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B688A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentSettlementConfig_TypeDefinitionIndex = 16141;

	class HipplenIncidentSettlementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* ImagePath; // 0x18
		::System::UInt32 DialogID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB4A8653690E2D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentSettlementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentSettlementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_METHOD_2_CB4A8653690E2D25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_EBF485A848324438(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentSettlementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSETTLEMENTCONFIG_METHOD_2_EBF485A848324438_OFFSET))(a1, a2);
		}
	};
}
