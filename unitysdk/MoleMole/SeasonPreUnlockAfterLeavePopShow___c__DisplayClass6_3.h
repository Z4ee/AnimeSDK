#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__CTOR_OFFSET UNITYSDK_OFFSET(0x160EC2B0)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__DOPREUNLOCKASYNC_B__7_OFFSET UNITYSDK_OFFSET(0x160EC2C0)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__DOPREUNLOCKASYNC_B__8_OFFSET UNITYSDK_OFFSET(0x160EC2D0)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_3_TypeDefinitionIndex = 59674;

	class SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_3 : public ::System::Object
	{
	public:
		::System::Boolean fadeOut; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__CTOR_OFFSET))(this);
		}

		::System::Void _DoPreUnlockAsync_b__7(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__DOPREUNLOCKASYNC_B__7_OFFSET))(this, _);
		}

		::System::Boolean _DoPreUnlockAsync_b__8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW___C__DISPLAYCLASS6_3__DOPREUNLOCKASYNC_B__8_OFFSET))(this);
		}
	};
}
