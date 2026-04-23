#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAAB6180)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_EXTRAROLLRESULT_OFFSET UNITYSDK_OFFSET(0xAABD3E0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xAABD3A0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_ROLLRANDOMLIST_OFFSET UNITYSDK_OFFSET(0xAABD3C0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_EXTRAROLLRESULT_OFFSET UNITYSDK_OFFSET(0xAABD3F0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xAABD3B0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_ROLLRANDOMLIST_OFFSET UNITYSDK_OFFSET(0xAABD3D0)
#define RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAABD390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyRollRandomResultData_TypeDefinitionIndex = 61010;

	class MonopolyRollRandomResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RollRandomList_k__BackingField; // 0x10
		::System::UInt32 _ExtraRollResult_k__BackingField; // 0x18
		::System::UInt32 _OptionID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyRollRandomResultData* Create(::System::UInt32 optionID, ::System::Collections::Generic::List_1<::System::UInt32>* rollRandomList, ::System::UInt32 extraRollResult)
		{
			return ((::RPG::Client::MonopolyRollRandomResultData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_CREATE_OFFSET))(optionID, rollRandomList, extraRollResult);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_OPTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RollRandomList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_ROLLRANDOMLIST_OFFSET))(this);
		}

		::System::Void set_RollRandomList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_ROLLRANDOMLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraRollResult()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_GET_EXTRAROLLRESULT_OFFSET))(this);
		}

		::System::Void set_ExtraRollResult(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYROLLRANDOMRESULTDATA_SET_EXTRAROLLRESULT_OFFSET))(this, value);
		}
	};
}
