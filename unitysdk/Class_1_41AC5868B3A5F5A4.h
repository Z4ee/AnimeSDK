#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7AA0)

inline static constexpr unsigned int Class_1_41AC5868B3A5F5A4_TypeDefinitionIndex = 36145;

class Class_1_41AC5868B3A5F5A4 : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* NLIFDJHPHLP; // 0x10
	::System::Single HLMHCCCJFBA; // 0x18
	::System::Boolean IKNKOCPLCHE; // 0x1C
	::RPG::MVector3 IJHDBLGLCMN; // 0x20
	::RPG::MVector3 DLKMKNFJLIK; // 0x2C
	::RPG::GameCore::CakeRaceCurveType OJFNNJIGHDB; // 0x38
	::System::Single BJMAMHMCOEL; // 0x3C
	::System::Single FAFCKJNFKCE; // 0x40
	::System::Single MLKAGGJKCGN; // 0x44
	::System::Single IEHPFADHJFD; // 0x48
	::RPG::MVector3 GGPBJBIEBII; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET))(this);
	}
};
