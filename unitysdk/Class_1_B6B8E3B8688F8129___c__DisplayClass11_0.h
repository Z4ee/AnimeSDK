#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define CLASS_1_B6B8E3B8688F8129___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105234C0)
#define CLASS_1_B6B8E3B8688F8129___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x105234D0)

inline static constexpr unsigned int Class_1_B6B8E3B8688F8129___c__DisplayClass11_0_TypeDefinitionIndex = 43364;

class Class_1_B6B8E3B8688F8129___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::UInt32 pairID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetResonanceIndex_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET))(this, x);
	}
};
