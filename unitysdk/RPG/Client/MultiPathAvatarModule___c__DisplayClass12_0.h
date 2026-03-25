#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_4;

#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA7BB0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS12_0__SYNCSERVERDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9DA7BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarModule___c__DisplayClass12_0_TypeDefinitionIndex = 53923;

	class MultiPathAvatarModule___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseAvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncServerData_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*> data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS12_0__SYNCSERVERDATA_B__0_OFFSET))(this, data);
		}
	};
}
