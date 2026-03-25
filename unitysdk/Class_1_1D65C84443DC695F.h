#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1D65C84443DC695F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x108D7DA0)
#define CLASS_1_1D65C84443DC695F__CTOR_OFFSET UNITYSDK_OFFSET(0x108D7DF0)

inline static constexpr unsigned int Class_1_1D65C84443DC695F_TypeDefinitionIndex = 53581;

class Class_1_1D65C84443DC695F : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_4 = 0x6; // 0x0
	// static const ::System::UInt32 Field_1_5 = 0xE; // 0x0
	::System::Boolean Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::GameCore::Match3::PieceTag Field_1_2; // 0x18
	::RPG::GameCore::Match3::BombType Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D65C84443DC695F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D65C84443DC695F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
