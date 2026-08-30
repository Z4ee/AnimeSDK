#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET UNITYSDK_OFFSET(0x19D53500)

inline static constexpr unsigned int Class_1_41AC5868B3A5F5A4_TypeDefinitionIndex = 36145;

class Class_1_41AC5868B3A5F5A4 : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* NLIFDJHPHLP; // 0x10
	::RPG::MVector3 DLKMKNFJLIK; // 0x18
	::RPG::MVector3 GGPBJBIEBII; // 0x24
	::System::Single HLMHCCCJFBA; // 0x30
	::System::Single MLKAGGJKCGN; // 0x34
	::System::Boolean IKNKOCPLCHE; // 0x38
	::RPG::MVector3 IJHDBLGLCMN; // 0x3C
	::System::Single FAFCKJNFKCE; // 0x48
	::RPG::GameCore::CakeRaceCurveType OJFNNJIGHDB; // 0x4C
	::System::Single IEHPFADHJFD; // 0x50
	::System::Single BJMAMHMCOEL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET))(this);
	}
};
