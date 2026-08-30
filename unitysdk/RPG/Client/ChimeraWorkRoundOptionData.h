#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkRoundOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraWorkRoundOptionRow; }

#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1BBF8720)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1BBF8830)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BBF8790)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1BBF8730)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF88D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionData_TypeDefinitionIndex = 63576;

	class ChimeraWorkRoundOptionData : public ::System::Object
	{
	public:
		::System::UInt32 _OptionID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONDATA__CTOR_OFFSET))(this, a1);
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
