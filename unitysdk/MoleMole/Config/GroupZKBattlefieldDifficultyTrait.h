#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16C57890)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C57990)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C57880)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C57EC0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C57B30)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16C58320)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETFLOORDIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x16C586B0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16C57980)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C57F20)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C57BB0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C58190)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C57D80)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16C587F0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C58800)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16C58810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupZKBattlefieldDifficultyTrait_TypeDefinitionIndex = 45210;

	class GroupZKBattlefieldDifficultyTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ZKLevelTagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GroupZKBattlefieldDifficultyTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GroupZKBattlefieldDifficultyTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GroupZKBattlefieldDifficultyTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GroupZKBattlefieldDifficultyTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		static ::System::Int32 GetFloorDifficultyTagID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETFLOORDIFFICULTYTAGID_OFFSET))();
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
