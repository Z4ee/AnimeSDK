#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_30;
class Class_1_E7C4009BCC22497A_20;
class Class_1_F9FBCC956DFCF137_9;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateReijuSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET UNITYSDK_OFFSET(0x9698110)
#define RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x969A0A0)
#define RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET UNITYSDK_OFFSET(0x969A350)
#define RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x969A360)
#define RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET UNITYSDK_OFFSET(0x969A260)
#define RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x96983C0)
#define RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x967D1D0)
#define RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x967C360)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuInfo_TypeDefinitionIndex = 52036;

	class FateReijuInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _OwnedReijus; // 0x10
		::RPG::Client::FateReijuSelectAction* _SelectAction; // 0x18
		::Class_1_F9FBCC956DFCF137_9* _ParamProxyFactory; // 0x20

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_9* paramProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET))(this, paramProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_30*>* protoReijuList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET))(this, protoReijuList);
		}

		::System::Void SyncPendingReijuSelectAction(::System::UInt32 actionID, ::Class_1_E7C4009BCC22497A_20* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E7C4009BCC22497A_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET))(this, actionID, proto);
		}

		::System::Void AddReiju(::Class_1_120319518E6F6581_30* protoReiju)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET))(this, protoReiju);
		}

		static ::System::Boolean IsRerollUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET))(difficulty);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* get_AllReijus()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET))(this);
		}

		::RPG::Client::FateReijuSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::FateReijuSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET))(this);
		}
	};
}
