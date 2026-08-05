#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace MoleMole::Config { class HollowNapEffectConfig; }
namespace MoleMole::Config { class SpaceEffectBaseConfig; }
namespace MoleMole::Config { class VirtualSpaceLineEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11474B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardParticle_TypeDefinitionIndex = 47776;

	class ConfigHollowChessboardParticle : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*>* particleGroup; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowNapEffectConfig*>* NapParticle; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SpaceEffectBaseConfig*>* SpaceEffectConfig; // 0x68
		::MoleMole::Config::VirtualSpaceLineEffectConfig* VirtualSpaceLineConfig; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HollowChessboardUvAnimConfig*>* uvAnimGroup; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDPARTICLE__CTOR_OFFSET))(this);
		}
	};
}
