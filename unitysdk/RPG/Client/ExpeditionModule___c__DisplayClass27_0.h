#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3107D0)
#define RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS27_0__ISREQUIREBYGROWTHTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xA3113B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule___c__DisplayClass27_0_TypeDefinitionIndex = 58834;

	class ExpeditionModule___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* material; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRequireByGrowthTarget_b__0(::RPG::Client::ItemDisplayData* itemDisplayData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__DISPLAYCLASS27_0__ISREQUIREBYGROWTHTARGET_B__0_OFFSET))(this, itemDisplayData);
		}
	};
}
