#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MEMTESTPAGECONTROLLER_PLAYERDROPDOWNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B227FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MemTestPageController_PlayerDropDownItem_TypeDefinitionIndex = 72730;

	class MemTestPageController_PlayerDropDownItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AssetPaths; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_PLAYERDROPDOWNITEM__CTOR_OFFSET))(this);
		}
	};
}
