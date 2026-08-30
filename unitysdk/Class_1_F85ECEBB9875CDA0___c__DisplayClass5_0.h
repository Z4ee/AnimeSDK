#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_976;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1BCE0)
#define CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET UNITYSDK_OFFSET(0x18A1BFC0)

inline static constexpr unsigned int Class_1_F85ECEBB9875CDA0___c__DisplayClass5_0_TypeDefinitionIndex = 67418;

class Class_1_F85ECEBB9875CDA0___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_D17272E82AE804C2_976*>* __9__0; // 0x10
	::RPG::GameCore::RogueMagicMountType mountType; // 0x18
	::System::UInt32 i; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SyncMagicUnits_b__0(::Class_1_D17272E82AE804C2_976* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_976*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET))(this, a1);
	}
};
