#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191733E0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__DOWAIT_B__0_OFFSET UNITYSDK_OFFSET(0x191733F0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c__DisplayClass16_0_TypeDefinitionIndex = 86891;

	class PerformPopShow___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* onPlay; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoWait_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__DOWAIT_B__0_OFFSET))(this);
		}
	};
}
