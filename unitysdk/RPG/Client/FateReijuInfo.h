#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_33;
class Class_1_D40936EF3BF54118_27;
class Class_1_F9FBCC956DFCF137_17;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateReijuSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET UNITYSDK_OFFSET(0xB9AA610)
#define RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9ACA60)
#define RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET UNITYSDK_OFFSET(0xB9ACF70)
#define RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0xB9ACF80)
#define RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET UNITYSDK_OFFSET(0xB9ACE80)
#define RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET UNITYSDK_OFFSET(0xB9AA930)
#define RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB9ACC30)
#define RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9ACA10)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuInfo_TypeDefinitionIndex = 59915;

	class FateReijuInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _OwnedReijus; // 0x10
		::RPG::Client::FateReijuSelectAction* _SelectAction; // 0x18
		::Class_1_F9FBCC956DFCF137_17* _ParamProxyFactory; // 0x20

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncPendingReijuSelectAction(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_27* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void AddReiju(::Class_1_D1E0AD3915BCCF29_33* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET))(this, a1);
		}

		static ::System::Boolean IsRerollUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET))(a1);
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
