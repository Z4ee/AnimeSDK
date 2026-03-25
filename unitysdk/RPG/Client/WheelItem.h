#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncEntranceData; }
namespace RPG::GameCore { class WheelSelectConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WHEELITEM_CREATEALL_OFFSET UNITYSDK_OFFSET(0xA785560)
#define RPG_CLIENT_WHEELITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA7856F0)
#define RPG_CLIENT_WHEELITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA7857F0)
#define RPG_CLIENT_WHEELITEM_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xA785860)
#define RPG_CLIENT_WHEELITEM_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xA7859C0)
#define RPG_CLIENT_WHEELITEM_GET_FOURSLOTORDER_OFFSET UNITYSDK_OFFSET(0xA785410)
#define RPG_CLIENT_WHEELITEM_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0xA7853C0)
#define RPG_CLIENT_WHEELITEM_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xA7854B0)
#define RPG_CLIENT_WHEELITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA785430)
#define RPG_CLIENT_WHEELITEM_GET_INDEXID_OFFSET UNITYSDK_OFFSET(0xA7853A0)
#define RPG_CLIENT_WHEELITEM_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0xA785540)
#define RPG_CLIENT_WHEELITEM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA7853F0)
#define RPG_CLIENT_WHEELITEM_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0xA785510)
#define RPG_CLIENT_WHEELITEM_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xA785450)
#define RPG_CLIENT_WHEELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA785850)

namespace RPG::Client
{
	inline static constexpr unsigned int WheelItem_TypeDefinitionIndex = 49752;

	class WheelItem : public ::System::Object
	{
	public:
		::RPG::GameCore::WheelSelectConfigRow* _Meta; // 0x10
		::RPG::Client::FuncEntranceData* _FunctionEntrance; // 0x18

		::System::Void _ctor(::RPG::GameCore::WheelSelectConfigRow* meta, ::RPG::Client::FuncEntranceData* functionEntrance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WheelSelectConfigRow*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM__CTOR_OFFSET))(this, meta, functionEntrance);
		}

		::System::UInt32 get_IndexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_INDEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_FUNCNAME_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ORDER_OFFSET))(this);
		}

		::System::UInt32 get_FourSlotOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_FOURSLOTORDER_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_UNLOCKID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_GOTOID_OFFSET))(this);
		}

		::System::String* get_RedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_REDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ISCANSHOW_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::WheelItem*>* CreateAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::WheelItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATEALL_OFFSET))();
		}

		static ::RPG::Client::WheelItem* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::WheelItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATE_OFFSET))(id);
		}

		static ::RPG::Client::WheelItem* Create_1(::RPG::GameCore::WheelSelectConfigRow* meta)
		{
			return ((::RPG::Client::WheelItem*(*)(::RPG::GameCore::WheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATE_1_OFFSET))(meta);
		}

		static ::System::Int32 GetEightWheelDefaultIndexByOrder(::System::Int32 order)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET))(order);
		}

		static ::System::Int32 GetFourWheelDefaultIndexByOrder(::System::Int32 order)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET))(order);
		}
	};
}
