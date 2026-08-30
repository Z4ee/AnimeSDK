#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1D65C84443DC695F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x159A72A0)
#define CLASS_1_1D65C84443DC695F__CTOR_OFFSET UNITYSDK_OFFSET(0x1597E540)

inline static constexpr unsigned int Class_1_1D65C84443DC695F_TypeDefinitionIndex = 66006;

class Class_1_1D65C84443DC695F : public ::System::Object
{
public:
	// static const ::System::UInt32 OILFOBJDFHB = 0x6; // 0x0
	// static const ::System::UInt32 FCNHJLJMIMI = 0xE; // 0x0
	::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x10
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x14
	::System::UInt32 KLOEJIMMPJM; // 0x18
	::System::Boolean HEPNDFHHHEG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D65C84443DC695F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D65C84443DC695F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
