#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_METHOD_2_55D8A31A8598B6A5_OFFSET UNITYSDK_OFFSET(0x17339B80)
#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17339D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMainMissionIssuePatch_TypeDefinitionIndex = 15948;

	class LevelGroupMainMissionIssuePatch : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_55D8A31A8598B6A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCH_METHOD_2_55D8A31A8598B6A5_OFFSET))(a1, a2);
		}
	};
}
