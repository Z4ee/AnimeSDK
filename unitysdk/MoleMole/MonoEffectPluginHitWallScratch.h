#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x149FD570)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x149FD530)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD5B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallScratch_TypeDefinitionIndex = 85460;

	class MonoEffectPluginHitWallScratch : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::MoleMole::Config::HitWallCameraShakeConfig* CameraShakeConfig; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>* ScratchEffects; // 0x60
		::System::Boolean Field_7_7; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_ONDISABLE_OFFSET))(this);
		}
	};
}
