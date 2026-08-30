#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

class Class_1_303D5A33D1401D59;
namespace System { class String; }

#define RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A3450)
#define RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__ONSTATECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xD0A39D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FlipDevicePoint___c__DisplayClass7_0_TypeDefinitionIndex = 73222;

	class FlipDevicePoint___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType> item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnStateChange_b__0(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT___C__DISPLAYCLASS7_0__ONSTATECHANGE_B__0_OFFSET))(this, a1);
		}
	};
}
