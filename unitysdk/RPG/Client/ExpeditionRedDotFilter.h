#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA311710)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA311640)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA311490)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA312170)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0xA311DF0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET UNITYSDK_OFFSET(0xA3118B0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0xA311A20)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET UNITYSDK_OFFSET(0xA311D90)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETEOREMPTY_OFFSET UNITYSDK_OFFSET(0xA311900)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0xA311A70)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA312310)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA312290)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA312210)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionRedDotFilter_TypeDefinitionIndex = 61544;

	class ExpeditionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionsList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionGroupsList; // 0x18
		::System::Boolean IsEmpty; // 0x20
		::System::Boolean IsCompleted; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExpeditionCompleteRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnExpeditionIsNewRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnExpeditionRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _InitUnseen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET))(this);
		}

		::System::Void _RefreshCompleteOrEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETEOREMPTY_OFFSET))(this);
		}

		::System::Void _RefreshIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
