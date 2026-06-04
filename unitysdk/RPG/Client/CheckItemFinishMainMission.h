#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB5A2390)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xB5A2700)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETTARGETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB5A26C0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5A2610)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A2370)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB5A2420)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB5A24D0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB5A2570)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB5A2880)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5A2A40)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB5A28E0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB5A2940)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB5A29A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemFinishMainMission_TypeDefinitionIndex = 55979;

	class CheckItemFinishMainMission : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetMainMissionID; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
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
