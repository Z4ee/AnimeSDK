#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_27B56D19ACB88C10;

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19FEA5B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET_HINTTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x19FEA500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x19FEA440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19FEA3E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEA5A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2TacticsPointEventData_TypeDefinitionIndex = 72246;

	class DiceCombatV2TacticsPointEventData : public ::System::Object
	{
	public:
		::System::UInt32 _ID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA__CTOR_OFFSET))(this, a1);
		}

		::Class_1_27B56D19ACB88C10* get__Row()
		{
			return ((::Class_1_27B56D19ACB88C10*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::System::Int32 get_HintTextParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_GET_HINTTEXTPARAM_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2TacticsPointEventData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2TacticsPointEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2TACTICSPOINTEVENTDATA_CREATE_OFFSET))(a1);
		}
	};
}
