#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_5;
namespace RPG::Client { class MultiPathAvatarData; }

#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEB3C0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS11_0__INITSERVERDATA_B__0_OFFSET UNITYSDK_OFFSET(0xAAED270)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarModule___c__DisplayClass11_0_TypeDefinitionIndex = 61066;

	class MultiPathAvatarModule___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::MultiPathAvatarData* value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitServerData_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*> data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__DISPLAYCLASS11_0__INITSERVERDATA_B__0_OFFSET))(this, data);
		}
	};
}
