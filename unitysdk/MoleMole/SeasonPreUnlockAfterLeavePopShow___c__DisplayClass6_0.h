#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160EC130)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__DOPREUNLOCKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x160EC140)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__DOPREUNLOCKASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x160EC150)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_0_TypeDefinitionIndex = 59673;

	class SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Boolean unlockDone; // 0x10
		::System::Boolean unlockResult; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPreUnlockAsync_b__0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__DOPREUNLOCKASYNC_B__0_OFFSET))(this, result);
		}

		::System::Boolean _DoPreUnlockAsync_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_0__DOPREUNLOCKASYNC_B__1_OFFSET))(this);
		}
	};
}
