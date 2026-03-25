#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9972210)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x99721A0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x9971B60)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET UNITYSDK_OFFSET(0x9971F60)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x99722C0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET UNITYSDK_OFFSET(0x9972020)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9972380)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9972300)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemRedDotNewFilter_TypeDefinitionIndex = 54390;

	class ItemRedDotNewFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* RedDotItemNewKeys; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _ContainsItemType(::RPG::GameCore::ItemSubType itemType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET))(this, itemType);
		}

		::System::Void _UpdateRedDotNew(::RPG::Client::ItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET))(this, itemData);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
