#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17049C20)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17049D80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17049BD0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704B4B0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17049FF0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1704BEE0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17049D10)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704B510)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704A070)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704BD40)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704B370)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1704BF70)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1704BF80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1704BF90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertTrait_TypeDefinitionIndex = 79637;

	class ConfigMonsterAlertTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Boolean UseNewMode; // 0x18
		::System::String* AlertConfigKey; // 0x20
		::System::Boolean IsSetAlertValueMax; // 0x28
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x29
		::System::Boolean NoStackAlertReduceOnEnemyExitSameArea; // 0x2A
		::System::Boolean IsHoldAlertValue; // 0x2B
		::System::Int32 AlertGroup; // 0x2C
		::System::Boolean IsHandleMuteLevelHudOnIdle; // 0x30
		::System::Boolean MuteLevelHudOnIdle; // 0x31
		::System::Boolean IsHandleMuteLevelHudOnEnterBattle; // 0x32
		::System::Boolean MuteLevelHudOnEnterBattle; // 0x33
		::System::Boolean IsHandleShowMonsterHPWhenLevelHUDShowOnIdle; // 0x34
		::System::Boolean ShowMonsterHPWhenLevelHUDShowOnIdle; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
