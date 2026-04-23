#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA662690)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA662620)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xA661FE0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET UNITYSDK_OFFSET(0xA6623E0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA662740)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET UNITYSDK_OFFSET(0xA6624A0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA662800)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA662780)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemRedDotNewFilter_TypeDefinitionIndex = 61553;

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
