#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsMessageItemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0x1C54DBB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET UNITYSDK_OFFSET(0x1C54DCF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C54DBF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C54DC50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET UNITYSDK_OFFSET(0x1C54DCA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_MESSAGEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C54DC30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET UNITYSDK_OFFSET(0x1C54DB90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_MAKEWRITETIMESHORTBYRATIO_OFFSET UNITYSDK_OFFSET(0x1C54DD40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_MESSAGEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C54DC40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET UNITYSDK_OFFSET(0x1C54DBA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5449E0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMessageItemViewModel_TypeDefinitionIndex = 79108;

	class LimaoNewsMessageItemViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsMessageItemType _MessageItemType_k__BackingField; // 0x10
		::System::Single _WriteTime_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Single get_WriteTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_WRITETIME_OFFSET))(this);
		}

		::System::Void set_WriteTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_WRITETIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_BLOCKS_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMessageItemType get_MessageItemType()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMessageItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_MESSAGEITEMTYPE_OFFSET))(this);
		}

		::System::Void set_MessageItemType(::RPG::Client::LimaoNews::LimaoNewsMessageItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMessageItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_SET_MESSAGEITEMTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsSystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISSYSTEM_OFFSET))(this);
		}

		::System::Boolean get_IsImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_GET_ISIMAGE_OFFSET))(this);
		}

		::System::Void MakeWriteTimeShortByRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMESSAGEITEMVIEWMODEL_MAKEWRITETIMESHORTBYRATIO_OFFSET))(this, a1);
		}
	};
}
