#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA71200)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1AA711F0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA71520)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA71370)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1AA71300)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA715B0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA713F0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA71610)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA71420)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA71790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterTraitBase_TypeDefinitionIndex = 48213;

	class MonsterTraitBase : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonsterTraitBase* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonsterTraitBase* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
