#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/PlanetFesTradingCardApplyHandleType.h"
#include "unitysdk/System/Object.h"

class Class_1_4172F4030D1E5435;
class Class_1_66C869DF1F46CC10_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9FCE990)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9FCE850)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET UNITYSDK_OFFSET(0x9FCEEC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0x9FCEEE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0x9FCEF20)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x9FCEF00)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0x9FCEEA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x9FCEAC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET UNITYSDK_OFFSET(0x9FCEED0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0x9FCEEF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0x9FCEF30)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0x9FCEF10)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0x9FCEEB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE980)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardApplyItem_TypeDefinitionIndex = 54171;

	class PlanetFesTradingCardApplyItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ApplyPieceList_k__BackingField; // 0x10
		::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x18
		::System::UInt32 _UserID_k__BackingField; // 0x20
		::RPG::Client::PlanetFesTradingCardApplyHandleType _HandleType_k__BackingField; // 0x24
		::System::UInt32 _ApplyId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create(::Class_1_66C869DF1F46CC10_1* apply)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_66C869DF1F46CC10_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET))(apply);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create_1(::Class_1_4172F4030D1E5435* history)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_4172F4030D1E5435*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET))(history);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt32 get_ApplyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET))(this);
		}

		::System::Void set_ApplyId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ApplyPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET))(this);
		}

		::System::Void set_ApplyPieceList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_PresentTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET))(this);
		}

		::System::Void set_PresentTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesTradingCardApplyHandleType get_HandleType()
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyHandleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET))(this);
		}

		::System::Void set_HandleType(::RPG::Client::PlanetFesTradingCardApplyHandleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyHandleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET))(this, value);
		}
	};
}
