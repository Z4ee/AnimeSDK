#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
class Class_3_4F91AE3B00DB7EFF_24;

#define CLASS_3_4F91AE3B00DB7EFF_24___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x117918D0)
#define CLASS_3_4F91AE3B00DB7EFF_24___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0x117918E0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_24___c__DisplayClass1_0_TypeDefinitionIndex = 49672;

class Class_3_4F91AE3B00DB7EFF_24___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_3_4F91AE3B00DB7EFF_24* __4__this; // 0x10
	::System::Nullable_1<::System::Boolean> ret; // 0x18
	::RPG::GameCore::FixPoint compareValue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_24___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _Evaluate_b__0(::Class_0_16E4307DCC419505_343* instance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_24___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, instance);
	}
};
