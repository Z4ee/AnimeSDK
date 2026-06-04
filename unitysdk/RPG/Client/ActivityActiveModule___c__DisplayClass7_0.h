#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB082DC0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_0___SYNCACTIVEACTIVITYDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0xB0833B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass7_0_TypeDefinitionIndex = 57384;

	class ActivityActiveModule___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* protoIDSet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncActiveActivityDataList_b__0(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_0___SYNCACTIVEACTIVITYDATALIST_B__0_OFFSET))(this, a1);
		}
	};
}
