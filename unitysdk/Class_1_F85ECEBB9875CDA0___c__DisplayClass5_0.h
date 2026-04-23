#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_105;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10ACFF20)
#define CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET UNITYSDK_OFFSET(0x10AD0200)

inline static constexpr unsigned int Class_1_F85ECEBB9875CDA0___c__DisplayClass5_0_TypeDefinitionIndex = 62122;

class Class_1_F85ECEBB9875CDA0___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_D1E0AD3915BCCF29_105*>* __9__0; // 0x10
	::System::UInt32 i; // 0x18
	::RPG::GameCore::RogueMagicMountType mountType; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SyncMagicUnits_b__0(::Class_1_D1E0AD3915BCCF29_105* protoUnit)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_105*))((::PBYTE)hIl2Cpp + CLASS_1_F85ECEBB9875CDA0___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET))(this, protoUnit);
	}
};
