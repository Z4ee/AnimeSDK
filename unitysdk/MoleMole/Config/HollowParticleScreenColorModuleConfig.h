#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_0AC327AA661D91B2;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x1A4BCB20)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x1A4BCCC0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BCD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleScreenColorModuleConfig_TypeDefinitionIndex = 74686;

	class HollowParticleScreenColorModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> BlendData; // 0x18
		::MoleMole::HollowChessboard::ColorModifyInfo ColorModifyInfoData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_0AC327AA661D91B2* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
