#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1243ACB0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1243AC00)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_1C7A9BBFB7D7269F_OFFSET UNITYSDK_OFFSET(0x1243ADB0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1243AA90)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_894387D2FBFA5627_OFFSET UNITYSDK_OFFSET(0x1243AF30)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0x1243AD40)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1243AA80)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1243AB90)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x1243AC80)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1243ADA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterTraitBase_TypeDefinitionIndex = 55526;

	class MonsterTraitBase : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MonsterTraitBase* Method_2_1C7A9BBFB7D7269F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_1C7A9BBFB7D7269F_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::MonsterTraitBase* Method_2_894387D2FBFA5627(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_METHOD_2_894387D2FBFA5627_OFFSET))(a1);
		}
	};
}
