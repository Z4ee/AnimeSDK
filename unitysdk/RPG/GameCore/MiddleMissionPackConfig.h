#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_METHOD_2_8753D99AD8D9AB2B_OFFSET UNITYSDK_OFFSET(0x1741B400)
#define RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1741B520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiddleMissionPackConfig_TypeDefinitionIndex = 17394;

	class MiddleMissionPackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::Il2CppArray<::RPG::GameCore::MiddleSinglePackMissionConfig*>* PackMissionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8753D99AD8D9AB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiddleMissionPackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiddleMissionPackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLEMISSIONPACKCONFIG_METHOD_2_8753D99AD8D9AB2B_OFFSET))(a1, a2);
		}
	};
}
