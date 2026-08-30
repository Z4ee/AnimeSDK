#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1750960FB5F747AB__CTOR_OFFSET UNITYSDK_OFFSET(0xC02DE20)

inline static constexpr unsigned int Class_1_1750960FB5F747AB_TypeDefinitionIndex = 57777;

class Class_1_1750960FB5F747AB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* FNFFCPLHPGI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_21DCD4640D389503_9*>* LHHEGCIAHPD; // 0x18
	::RPG::GameCore::FixPoint NEMOMKPCCMG; // 0x20
	::RPG::GameCore::FixPoint LIOCBCEJAIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1750960FB5F747AB__CTOR_OFFSET))(this);
	}
};
