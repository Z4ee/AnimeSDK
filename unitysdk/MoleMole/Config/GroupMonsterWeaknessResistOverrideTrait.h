#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A93FF50)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A93FF40)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A940410)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A940060)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A940890)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A940050)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A940470)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A9400E0)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A9406E0)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A9402B0)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A940930)
#define MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A940940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupMonsterWeaknessResistOverrideTrait_TypeDefinitionIndex = 86962;

	class GroupMonsterWeaknessResistOverrideTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 OverrideID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GroupMonsterWeaknessResistOverrideTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GroupMonsterWeaknessResistOverrideTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GroupMonsterWeaknessResistOverrideTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GroupMonsterWeaknessResistOverrideTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPMONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
