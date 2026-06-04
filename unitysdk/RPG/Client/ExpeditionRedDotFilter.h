#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB962280)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9621E0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xB961FF0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB962DD0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0xB962A60)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET UNITYSDK_OFFSET(0xB962460)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0xB9625D0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET UNITYSDK_OFFSET(0xB962A00)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETEOREMPTY_OFFSET UNITYSDK_OFFSET(0xB9624B0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0xB962620)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB962F50)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB962EE0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB962E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionRedDotFilter_TypeDefinitionIndex = 62477;

	class ExpeditionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionGroupsList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionsList; // 0x18
		::System::Boolean IsCompleted; // 0x20
		::System::Boolean IsEmpty; // 0x21

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

		::System::Void _OnExpeditionCompleteRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnExpeditionIsNewRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnExpeditionRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET))(this, a1);
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
