#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_10;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_82F5C77DD4957B13__CTOR_OFFSET UNITYSDK_OFFSET(0xAC34440)

inline static constexpr unsigned int Class_1_82F5C77DD4957B13_TypeDefinitionIndex = 53832;

class Class_1_82F5C77DD4957B13 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_21DCD4640D389503_10*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F5C77DD4957B13__CTOR_OFFSET))(this);
	}
};
