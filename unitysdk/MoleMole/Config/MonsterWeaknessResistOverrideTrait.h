#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B7FF4C0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7FF4B0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FF980)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FF5D0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7FFE50)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B7FF5C0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FF9E0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FF650)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FFC50)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FF820)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7FFE00)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FFEF0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7FFF00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterWeaknessResistOverrideTrait_TypeDefinitionIndex = 57438;

	class MonsterWeaknessResistOverrideTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 OverrideID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonsterWeaknessResistOverrideTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonsterWeaknessResistOverrideTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonsterWeaknessResistOverrideTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonsterWeaknessResistOverrideTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
