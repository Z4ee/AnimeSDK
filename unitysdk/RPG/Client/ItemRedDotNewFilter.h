#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMREDDOTNEWFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194F3CF0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x194F3CA0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x194F3570)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET UNITYSDK_OFFSET(0x194F39D0)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x194F3D70)
#define RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET UNITYSDK_OFFSET(0x194F3A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemRedDotNewFilter_TypeDefinitionIndex = 66843;

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

		::System::Boolean _ContainsItemType(::RPG::GameCore::ItemSubType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemSubType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__CONTAINSITEMTYPE_OFFSET))(this, a1);
		}

		::System::Void _UpdateRedDotNew(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTNEWFILTER__UPDATEREDDOTNEW_OFFSET))(this, a1);
		}
	};
}
