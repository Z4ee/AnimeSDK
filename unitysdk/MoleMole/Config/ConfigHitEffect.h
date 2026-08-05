#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLONED_OFFSET UNITYSDK_OFFSET(0x1B54E270)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B54DE00)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B54D080)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_GET_GROUNDHITCURVEFOLLOWHITSTATE_OFFSET UNITYSDK_OFFSET(0x1B54E220)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B54DE60)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B54D100)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_SETHITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B54E340)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B54E390)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54E230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitEffect_TypeDefinitionIndex = 60768;

	class ConfigHitEffect : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigHitEffect** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigHitEffect**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_TypeDefinitionIndex)->GetStaticField(0x3E2D0);
		}
		::System::String* groundHitCurveKey; // 0x10
		::System::String* backUpGroundHitCurveKey; // 0x18
		::System::String* airHitCurveKey; // 0x20
		::MoleMole::Config::ConfigHitInhalationEffect* HitInhalationEffect; // 0x28
		::System::String* hitEffectType; // 0x30
		::MoleMole::Config::AnimatorAirHitType TargetSubHitEffect_Air; // 0x38
		::MoleMole::Config::AnimatorHitEffect TargetHitEffect; // 0x3C
		::MoleMole::Config::AnimatorGroundHitType BackUpTargetSubHitEffect_Ground; // 0x40
		::MoleMole::Config::AnimatorGroundHitType TargetSubHitEffect_Ground; // 0x44
		::MoleMole::Config::AnimatorHitEffect BackupTargetHitEffect; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean get_groundHitCurveFollowHitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_GET_GROUNDHITCURVEFOLLOWHITSTATE_OFFSET))(this);
		}

		::MoleMole::Config::ConfigHitEffect* Cloned()
		{
			return ((::MoleMole::Config::ConfigHitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLONED_OFFSET))(this);
		}

		::System::Void SetHitEffectType(::System::String* hitEffectType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_SETHITEFFECTTYPE_OFFSET))(this, hitEffectType);
		}
	};
}
