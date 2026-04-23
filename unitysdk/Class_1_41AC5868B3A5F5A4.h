#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCD2C0)

inline static constexpr unsigned int Class_1_41AC5868B3A5F5A4_TypeDefinitionIndex = 34338;

class Class_1_41AC5868B3A5F5A4 : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* Field_1_6; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C
	::RPG::GameCore::CakeRaceCurveType Field_1_5; // 0x20
	::System::Single Field_1_0; // 0x24
	::RPG::MVector3 Field_1_9; // 0x28
	::System::Single Field_1_1; // 0x34
	::RPG::MVector3 Field_1_8; // 0x38
	::RPG::MVector3 Field_1_7; // 0x44
	::System::Boolean Field_1_10; // 0x50
	::System::Single Field_1_4; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET))(this);
	}
};
