#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/PlanetFesTradingCardApplyHandleType.h"
#include "unitysdk/System/Object.h"

class Class_1_875AA3E31F445B46_1;
class Class_1_A2967FAA88DD8F73;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC484F60)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC484E20)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET UNITYSDK_OFFSET(0xC485490)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0xC4854B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0xC4854F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xC4854D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0xC485470)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xC485090)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET UNITYSDK_OFFSET(0xC4854A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0xC4854C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0xC485500)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xC4854E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0xC485480)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC484F50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardApplyItem_TypeDefinitionIndex = 62258;

	class PlanetFesTradingCardApplyItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ApplyPieceList_k__BackingField; // 0x10
		::System::UInt32 _ApplyId_k__BackingField; // 0x18
		::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x20
		::System::UInt32 _UserID_k__BackingField; // 0x28
		::RPG::Client::PlanetFesTradingCardApplyHandleType _HandleType_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create(::Class_1_875AA3E31F445B46_1* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_875AA3E31F445B46_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create_1(::Class_1_A2967FAA88DD8F73* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET))(a1);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ApplyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET))(this);
		}

		::System::Void set_ApplyId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ApplyPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET))(this);
		}

		::System::Void set_ApplyPieceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_PresentTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET))(this);
		}

		::System::Void set_PresentTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesTradingCardApplyHandleType get_HandleType()
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyHandleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET))(this);
		}

		::System::Void set_HandleType(::RPG::Client::PlanetFesTradingCardApplyHandleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyHandleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET))(this, a1);
		}
	};
}
