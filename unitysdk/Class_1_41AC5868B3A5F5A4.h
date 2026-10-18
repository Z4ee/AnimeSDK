#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C99A0)

inline static constexpr unsigned int Class_1_41AC5868B3A5F5A4_TypeDefinitionIndex = 36832;

class Class_1_41AC5868B3A5F5A4 : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* NLIFDJHPHLP; // 0x10
	::RPG::GameCore::CakeRaceCurveType OJFNNJIGHDB; // 0x18
	::RPG::MVector3 IJHDBLGLCMN; // 0x1C
	::System::Single FAFCKJNFKCE; // 0x28
	::System::Single IEHPFADHJFD; // 0x2C
	::System::Single HLMHCCCJFBA; // 0x30
	::RPG::MVector3 DLKMKNFJLIK; // 0x34
	::System::Boolean IKNKOCPLCHE; // 0x40
	::RPG::MVector3 GGPBJBIEBII; // 0x44
	::System::Single BJMAMHMCOEL; // 0x50
	::System::Single MLKAGGJKCGN; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET))(this);
	}
};
