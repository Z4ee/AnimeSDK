#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F39840)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F39770)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9F39630)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F3A430)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONMESSAGEGROUPCHECKED_OFFSET UNITYSDK_OFFSET(0x9F399E0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONREFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F39A30)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x9F396B0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEREPLYREDDOT_OFFSET UNITYSDK_OFFSET(0x9F39A80)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__UPDATEUNREADREDDOT_OFFSET UNITYSDK_OFFSET(0x9F39C50)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F3A5D0)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F3A550)
#define RPG_CLIENT_PHONEMESSAGEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F3A4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneMessageRedDotFilter_TypeDefinitionIndex = 54392;

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

		::System::Void _OnMessageGroupChecked(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONMESSAGEGROUPCHECKED_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshNotify(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONEMESSAGEREDDOTFILTER__ONREFRESHNOTIFY_OFFSET))(this, arg);
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
