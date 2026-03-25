#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONIDPAIR_METHOD_2_F04CD62693931396_OFFSET UNITYSDK_OFFSET(0x17421C40)
#define RPG_GAMECORE_MISSIONIDPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x17421D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionIDPair_TypeDefinitionIndex = 17438;

	class MissionIDPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::Il2CppArray<::System::UInt32>* SubMissionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F04CD62693931396(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionIDPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionIDPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIR_METHOD_2_F04CD62693931396_OFFSET))(a1, a2);
		}
	};
}
