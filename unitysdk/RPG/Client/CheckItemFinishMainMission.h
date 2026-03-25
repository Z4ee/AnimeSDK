#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931AEE0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0x931B2D0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETTARGETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x931B290)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931B1E0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x931AEC0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931AF70)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x931B060)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x931B140)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931B450)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931B650)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931B4C0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x931B530)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x931B5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemFinishMainMission_TypeDefinitionIndex = 48496;

	class CheckItemFinishMainMission : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetMainMissionID; // 0x10

		::System::Void _ctor(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET))(this, param);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 GetTargetMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETTARGETMAINMISSIONID_OFFSET))(this);
		}

		::System::String* GetCheckItemInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETCHECKITEMINFO_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy__DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
