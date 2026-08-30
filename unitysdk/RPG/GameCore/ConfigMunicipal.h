#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WorldType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConfigMunicipalPedestrianOverride; }
namespace RPG::GameCore { class ConfigTrainDispatcher; }
namespace RPG::GameCore { class MunicipalQualitySetting; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGMUNICIPAL_METHOD_2_38B4767EF89DF362_OFFSET UNITYSDK_OFFSET(0x1D9B0B30)
#define RPG_GAMECORE_CONFIGMUNICIPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B0D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigMunicipal_TypeDefinitionIndex = 16723;

	class ConfigMunicipal : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MunicipalName; // 0x10
		::RPG::GameCore::WorldType MunicipalWorldType; // 0x18
		::RPG::GameCore::MunicipalQualitySetting* SettingData; // 0x20
		::RPG::GameCore::ConfigTrainDispatcher* TrainSetting; // 0x28
		::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* NpcWalkStyleWeightOverrides; // 0x30
		::System::String* OverrideEntityLodSettingTemplateConfigPath; // 0x38
		::RPG::GameCore::ConfigMunicipalPedestrianOverride* PedestrianParamOverride; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_38B4767EF89DF362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigMunicipal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigMunicipal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPAL_METHOD_2_38B4767EF89DF362_OFFSET))(a1, a2);
		}
	};
}
