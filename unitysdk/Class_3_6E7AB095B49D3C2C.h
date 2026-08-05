#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_7DE03FFC38B69B91;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_6E7AB095B49D3C2C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11965EF0)
#define CLASS_3_6E7AB095B49D3C2C_METHOD_3_8556135BB0A375D4_OFFSET UNITYSDK_OFFSET(0x119660C0)
#define CLASS_3_6E7AB095B49D3C2C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x119661E0)
#define CLASS_3_6E7AB095B49D3C2C__CTOR_OFFSET UNITYSDK_OFFSET(0x11966050)

inline static constexpr unsigned int Class_3_6E7AB095B49D3C2C_TypeDefinitionIndex = 70895;

class Class_3_6E7AB095B49D3C2C : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7AB095B49D3C2C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6E7AB095B49D3C2C_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8556135BB0A375D4(::Class_5_7DE03FFC38B69B91* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_6E7AB095B49D3C2C_METHOD_3_8556135BB0A375D4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6E7AB095B49D3C2C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
