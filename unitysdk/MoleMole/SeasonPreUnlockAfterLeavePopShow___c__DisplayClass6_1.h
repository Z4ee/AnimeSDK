#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x160EC160)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__DOPREUNLOCKASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x160EC170)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__DOPREUNLOCKASYNC_B__3_OFFSET UNITYSDK_OFFSET(0x160EC260)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_1_TypeDefinitionIndex = 59677;

	class SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::System::Boolean performDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Void _DoPreUnlockAsync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__DOPREUNLOCKASYNC_B__2_OFFSET))(this);
		}

		::System::Boolean _DoPreUnlockAsync_b__3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_1__DOPREUNLOCKASYNC_B__3_OFFSET))(this);
		}
	};
}
