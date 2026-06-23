#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x13ECD6F0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x13ECC5C0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x13ECC720)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x13ECC570)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ECCBD0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13ECC800)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x13ECCFC0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x13ECC6B0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INSERT_OFFSET UNITYSDK_OFFSET(0x13ECD5A0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ECCC30)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x13ECC880)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x13ECD010)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ECCE20)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x13ECCA90)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x13ECD550)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECD770)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__SETUPABILITY_OFFSET UNITYSDK_OFFSET(0x13ECD080)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x13ECD780)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x13ECD790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityAttacherTrait_TypeDefinitionIndex = 83013;

	class AbilityAttacherTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragment*>* AbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		static ::System::Void Insert(::Class_1_BFC2F9D5895EB2FB* map, ::MoleMole::Config::ConfigAbilityFragmentParam* param)
		{
			return ((::System::Void(*)(::Class_1_BFC2F9D5895EB2FB*, ::MoleMole::Config::ConfigAbilityFragmentParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INSERT_OFFSET))(map, param);
		}

		::System::Void _SetupAbility(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__SETUPABILITY_OFFSET))(this, entityHandle);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
