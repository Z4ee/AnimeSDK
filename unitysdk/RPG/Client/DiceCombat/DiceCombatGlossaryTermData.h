#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_447ED43F9613F177;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD28540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCD28710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCD28650)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCD28600)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD286A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD285F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGlossaryTermData_TypeDefinitionIndex = 75598;

	class DiceCombatGlossaryTermData : public ::System::Object
	{
	public:
		::Class_1_447ED43F9613F177* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_ID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGLOSSARYTERMDATA_GET_DESC_OFFSET))(this);
		}
	};
}
