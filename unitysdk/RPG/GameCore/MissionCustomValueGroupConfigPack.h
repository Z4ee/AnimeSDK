#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_3EDC2E3ED5F89DBB_OFFSET UNITYSDK_OFFSET(0x19944900)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_C2C0AD4B578EB3BF_OFFSET UNITYSDK_OFFSET(0x199449D0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x199449C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueGroupConfigPack_TypeDefinitionIndex = 18042;

	class MissionCustomValueGroupConfigPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionCustomValueGroupConfig*>* ConfigPackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3EDC2E3ED5F89DBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_3EDC2E3ED5F89DBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C2C0AD4B578EB3BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_C2C0AD4B578EB3BF_OFFSET))(a1, a2);
		}
	};
}
