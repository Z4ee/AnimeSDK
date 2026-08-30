#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_70E738A08FB039A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C42D990)
#define CLASS_1_70E738A08FB039A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42D9E0)

inline static constexpr unsigned int Class_1_70E738A08FB039A7_TypeDefinitionIndex = 41396;

class Class_1_70E738A08FB039A7 : public ::System::Object
{
public:
	::System::UInt32 JCJGJBLENCP; // 0x10
	::System::UInt32 CEJEOLOFOBL; // 0x14
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x18
	::System::UInt32 ONOGIODHCEC; // 0x1C
	::System::UInt32 JBHIKEHKLLI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70E738A08FB039A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70E738A08FB039A7_CLEAR_OFFSET))(this);
	}
};
