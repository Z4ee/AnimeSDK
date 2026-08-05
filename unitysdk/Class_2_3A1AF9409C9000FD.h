#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AC327AA661D91B2.h"
#include "unitysdk/UnityEngine/ParticleSystem_TextureSheetAnimationModule.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_3A1AF9409C9000FD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18DE7E70)
#define CLASS_2_3A1AF9409C9000FD_METHOD_2_F172CE28051649E8_OFFSET UNITYSDK_OFFSET(0x18DE7E80)
#define CLASS_2_3A1AF9409C9000FD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE7EF0)

inline static constexpr unsigned int Class_2_3A1AF9409C9000FD_TypeDefinitionIndex = 71226;

class Class_2_3A1AF9409C9000FD : public ::Class_1_0AC327AA661D91B2
{
public:
	::UnityEngine::ParticleSystem_TextureSheetAnimationModule Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A1AF9409C9000FD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A1AF9409C9000FD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_0AC327AA661D91B2* Method_2_F172CE28051649E8(::MoleMole::Config::HollowChessboardParticleModuleConfig* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_3A1AF9409C9000FD_METHOD_2_F172CE28051649E8_OFFSET))(this, a1, a2);
	}
};
