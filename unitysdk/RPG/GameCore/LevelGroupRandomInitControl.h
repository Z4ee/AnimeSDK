#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_METHOD_2_9E0CC66326787510_OFFSET UNITYSDK_OFFSET(0x18A467E0)
#define RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A46A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupRandomInitControl_TypeDefinitionIndex = 16436;

	class LevelGroupRandomInitControl : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ControlID; // 0x10
		::System::Single Weight; // 0x14
		::Il2CppArray<::System::UInt32>* NPCIDList; // 0x18
		::Il2CppArray<::System::UInt32>* PropIDList; // 0x20
		::Il2CppArray<::System::UInt32>* CrowdIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9E0CC66326787510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupRandomInitControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupRandomInitControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITCONTROL_METHOD_2_9E0CC66326787510_OFFSET))(a1, a2);
		}
	};
}
