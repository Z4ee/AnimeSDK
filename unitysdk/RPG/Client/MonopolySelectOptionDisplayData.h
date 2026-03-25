#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36E937D84726B70A;
class Class_1_4BE2238A927E39F1_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D703E0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GETOPTIONRATIO_OFFSET UNITYSDK_OFFSET(0x9D77240)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9D77340)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_ISSHOWOPTIONRATIO_OFFSET UNITYSDK_OFFSET(0x9D773A0)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x9D77360)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONRATIODATAS_OFFSET UNITYSDK_OFFSET(0x9D77380)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9D77350)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x9D77370)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONRATIODATAS_OFFSET UNITYSDK_OFFSET(0x9D77390)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D77230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolySelectOptionDisplayData_TypeDefinitionIndex = 53901;

	class MonopolySelectOptionDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_36E937D84726B70A*>* _OptionRatioDatas_k__BackingField; // 0x10
		::System::UInt32 _OptionID_k__BackingField; // 0x18
		::System::UInt32 _EventID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolySelectOptionDisplayData* Create(::Class_1_4BE2238A927E39F1_1* rsp)
		{
			return ((::RPG::Client::MonopolySelectOptionDisplayData*(*)(::Class_1_4BE2238A927E39F1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_CREATE_OFFSET))(rsp);
		}

		::System::UInt32 GetOptionRatio(::System::UInt32 optionID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GETOPTIONRATIO_OFFSET))(this, optionID);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_EVENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_36E937D84726B70A*>* get_OptionRatioDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_36E937D84726B70A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_OPTIONRATIODATAS_OFFSET))(this);
		}

		::System::Void set_OptionRatioDatas(::System::Collections::Generic::List_1<::Class_1_36E937D84726B70A*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_36E937D84726B70A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_SET_OPTIONRATIODATAS_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowOptionRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA_GET_ISSHOWOPTIONRATIO_OFFSET))(this);
		}
	};
}
