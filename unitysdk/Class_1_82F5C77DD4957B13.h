#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_82F5C77DD4957B13__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCC710)

inline static constexpr unsigned int Class_1_82F5C77DD4957B13_TypeDefinitionIndex = 53122;

class Class_1_82F5C77DD4957B13 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBB10EC01CCC4716_8*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F5C77DD4957B13__CTOR_OFFSET))(this);
	}
};
