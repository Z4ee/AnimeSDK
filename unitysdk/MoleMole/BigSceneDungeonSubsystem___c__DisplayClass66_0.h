#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6DA851A9BDCFFDD;
namespace System { class String; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS66_0__ADDCOUNTUPTIMERTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1279E2E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1279E2D0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c__DisplayClass66_0_TypeDefinitionIndex = 44146;

	class BigSceneDungeonSubsystem___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::String* tagName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddCountUpTimerTask_b__0(::Class_1_A6DA851A9BDCFFDD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS66_0__ADDCOUNTUPTIMERTASK_B__0_OFFSET))(this, x);
		}
	};
}
