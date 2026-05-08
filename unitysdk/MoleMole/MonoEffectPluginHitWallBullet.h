#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x15B91070)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallBullet_TypeDefinitionIndex = 57030;

	class MonoEffectPluginHitWallBullet : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::MoleMole::Config::HitWallCameraShakeConfig* CameraShakeConfig; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Battle::BulletHoleConfigObject*>* BulletHoleEffects; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET__CTOR_OFFSET))(this);
		}
	};
}
