#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/HitWallEffectNormalEnum.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17546FD0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17547460)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17547030)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x175474E0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175486C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RaycastHitWallEffectConfig_TypeDefinitionIndex = 52426;

	class RaycastHitWallEffectConfig : public ::System::Object
	{
	public:
		::System::String* HitWallEffect; // 0x10
		::System::String* EffRayDirAttachPoint; // 0x18
		::System::String* EffRayPosAttachPoint; // 0x20
		::System::String* OverrideCameraShakeKey; // 0x28
		::UnityEngine::Vector3 RandomEulerMin; // 0x30
		::UnityEngine::Vector3 RandomEulerMax; // 0x3C
		::UnityEngine::Vector3 HitWallEffectScaleMin; // 0x48
		::UnityEngine::Vector3 HitWallEffectScaleMax; // 0x54
		::MoleMole::Config::RayByAxis EffRayStartDirAxis; // 0x60
		::System::Single EffRayDistance; // 0x64
		::UnityEngine::Vector3 RayEulerOffset; // 0x68
		::MoleMole::Config::HitWallEffectNormalEnum HitWallNormalType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
