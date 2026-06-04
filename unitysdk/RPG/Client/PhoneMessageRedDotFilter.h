#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC370FF0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC370F50)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xC370E40)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC371B00)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONMESSAGEGROUPCHECKED_OFFSET UNITYSDK_OFFSET(0xC3711D0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0xC371220)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xC370EC0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREPLYREDDOT_OFFSET UNITYSDK_OFFSET(0xC371270)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEUNREADREDDOT_OFFSET UNITYSDK_OFFSET(0xC3714F0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC371C80)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC371C10)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC371BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneMessageRedDotFilter_TypeDefinitionIndex = 62488;

	class PhoneMessageRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGroupIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotContactIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMessageGroupChecked(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONMESSAGEGROUPCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONREFRESHNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateReplyRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREPLYREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateUnreadRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEUNREADREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
