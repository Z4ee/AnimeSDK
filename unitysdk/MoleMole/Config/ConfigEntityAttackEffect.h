#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkelem.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkweapon.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Imactlevel.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141EF490)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141EE840)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x141EF4F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x141EE8C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x141EF910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffect_TypeDefinitionIndex = 54030;

	class ConfigEntityAttackEffect : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* soundAction; // 0x10
		::System::String* GamepadRumbleKey; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* CounterAttackEffects; // 0x20
		::System::String* AudioPatternMp; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* AttackEffects; // 0x30
		::System::String* AudioPattern; // 0x38
		::MoleMole::Config::ConfigSoundActionGeneral* soundActionMp; // 0x40
		::MoleMole::Config::Wwise_SwitchGroup_Atkweapon AtkWeapon; // 0x48
		::MoleMole::Config::Wwise_SwitchGroup_Atkelem AtkElem; // 0x4C
		::MoleMole::Config::Wwise_SwitchGroup_Imactlevel ImactLevel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
