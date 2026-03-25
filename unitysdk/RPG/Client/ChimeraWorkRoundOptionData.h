#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkRoundOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraWorkRoundOptionRow; }

#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x93DD160)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x93DD240)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x93DD1D0)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93DD170)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93DD2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionData_TypeDefinitionIndex = 51584;

	class ChimeraWorkRoundOptionData : public ::System::Object
	{
	public:
		::System::UInt32 _OptionID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 optionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA__CTOR_OFFSET))(this, optionID);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_OPTIONID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWorkRoundOptionRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraWorkRoundOptionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWorkRoundOptionType get_Type()
		{
			return ((::RPG::GameCore::ChimeraWorkRoundOptionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_PARAMLIST_OFFSET))(this);
		}
	};
}
