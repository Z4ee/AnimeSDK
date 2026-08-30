#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6B6A4C789452DEC6.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_74361E0442AB1DB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18DE0020)
#define CLASS_2_74361E0442AB1DB0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x18DDFFD0)
#define CLASS_2_74361E0442AB1DB0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDFFA0)

inline static constexpr unsigned int Class_2_74361E0442AB1DB0_TypeDefinitionIndex = 70125;

class Class_2_74361E0442AB1DB0 : public ::Class_1_6B6A4C789452DEC6
{
public:
	::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x20
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28
	::System::Single DCOGIEGFBPP; // 0x30
	::System::Single LJLPEDJPKGP; // 0x34
	::System::Single PCEJNJJMOLI; // 0x38
	::System::Single IEHPFADHJFD; // 0x3C
	::System::Int32 DDKMCNFAECO; // 0x40
	::System::Single JHCNLPEJJLN; // 0x44
	::System::Boolean CNOHJLMNBPJ; // 0x48
	::System::Single PHNGGJDKEOC; // 0x4C

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74361E0442AB1DB0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
