#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6B6A4C789452DEC6.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture; }

#define CLASS_2_1FB66008306098B0_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1221F5F0)
#define CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x1221F5A0)
#define CLASS_2_1FB66008306098B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1221F580)

inline static constexpr unsigned int Class_2_1FB66008306098B0_TypeDefinitionIndex = 70122;

class Class_2_1FB66008306098B0 : public ::Class_1_6B6A4C789452DEC6
{
public:
	::UnityEngine::Texture* LHBMPPDMFKC; // 0x20
	::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x28
	::RPG::CustomRP::ColorGradingGradual EJLHCINGODM; // 0x30
	::System::Single FEKBJFJOCLF; // 0x34
	::System::Single CCAOGMEFNLB; // 0x38
	::System::Single HKHPEFCDPGP; // 0x3C
	::System::Single ALJFIPDOIIB; // 0x40
	::System::Single BJKPDKKNIOJ; // 0x44
	::System::Single FABKKJMEAPO; // 0x48
	::System::Single CAFPEJDDMNC; // 0x4C
	::System::Single GKBAJIBGNPK; // 0x50
	::System::Single CNBDOCBLIDP; // 0x54
	::System::Single EJOCALJIDPB; // 0x58

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FB66008306098B0_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}
};
