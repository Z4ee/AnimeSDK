#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_101F135A8D1D7DC7;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19FE5D00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONBGPATH_OFFSET UNITYSDK_OFFSET(0x19FE5E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19FE5DD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_RANKLEVELID_OFFSET UNITYSDK_OFFSET(0x19FE5D80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE5CF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2RankLevelData_TypeDefinitionIndex = 72243;

	class DiceCombatV2RankLevelData : public ::System::Object
	{
	public:
		::Class_1_101F135A8D1D7DC7* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2RankLevelData* Create(::Class_1_101F135A8D1D7DC7* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RankLevelData*(*)(::Class_1_101F135A8D1D7DC7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_RankLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_RANKLEVELID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2RANKLEVELDATA_GET_ICONBGPATH_OFFSET))(this);
		}
	};
}
