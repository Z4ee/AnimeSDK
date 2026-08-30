#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2BattleTalkData_SideType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_6403DECDBFD56254;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD49760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xCD49690)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xCD495F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_SIDE_OFFSET UNITYSDK_OFFSET(0xCD49550)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCD494F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD49750)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleTalkData_TypeDefinitionIndex = 75673;

	class DiceCombatV2BattleTalkData : public ::System::Object
	{
	public:
		::System::UInt32 _ID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_6403DECDBFD56254* get__Row()
		{
			return ((::Class_1_6403DECDBFD56254*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData_SideType get_Side()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData_SideType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_SIDE_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_HEADICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_GET_CONTENT_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleTalkData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLETALKDATA_CREATE_OFFSET))(a1);
		}
	};
}
