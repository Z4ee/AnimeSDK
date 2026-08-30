#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DF472CB3F2039D5D_CLEAR_OFFSET UNITYSDK_OFFSET(0x16290490)
#define CLASS_1_DF472CB3F2039D5D__CTOR_OFFSET UNITYSDK_OFFSET(0x162904E0)

inline static constexpr unsigned int Class_1_DF472CB3F2039D5D_TypeDefinitionIndex = 53948;

class Class_1_DF472CB3F2039D5D : public ::System::Object
{
public:
	::RPG::GameCore::AttackType NFMKOFNEKLA; // 0x10
	::RPG::GameCore::AttackType HILNFHCPEAD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF472CB3F2039D5D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF472CB3F2039D5D_CLEAR_OFFSET))(this);
	}
};
