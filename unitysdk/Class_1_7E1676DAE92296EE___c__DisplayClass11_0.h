#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA95C0)
#define CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x16DA9990)

inline static constexpr unsigned int Class_1_7E1676DAE92296EE___c__DisplayClass11_0_TypeDefinitionIndex = 51112;

class Class_1_7E1676DAE92296EE___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::UInt32 pairID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetResonanceIndex_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET))(this, a1);
	}
};
