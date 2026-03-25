#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_6AA237136CE533BE_OFFSET UNITYSDK_OFFSET(0x17420720)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x174207F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueGroupConfigPack_TypeDefinitionIndex = 17407;

	class MissionCustomValueGroupConfigPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionCustomValueGroupConfig*>* ConfigPackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6AA237136CE533BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_METHOD_2_6AA237136CE533BE_OFFSET))(a1, a2);
		}
	};
}
