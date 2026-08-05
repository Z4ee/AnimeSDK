#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_663AFC2250EC21C9;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16249470)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16247E70)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16247F70)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16247E10)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16248950)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16248280)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16248D90)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16247F60)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INSERT_OFFSET UNITYSDK_OFFSET(0x16249330)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x162489B0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16248300)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x16248DE0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16248C00)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16248810)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x162494F0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__SETUPABILITY_OFFSET UNITYSDK_OFFSET(0x16248E50)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16249510)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16249520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityAttacherTrait_TypeDefinitionIndex = 88547;

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

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
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

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Void Insert(::Class_1_663AFC2250EC21C9* map, ::MoleMole::Config::ConfigAbilityFragmentParam* param)
		{
			return ((::System::Void(*)(::Class_1_663AFC2250EC21C9*, ::MoleMole::Config::ConfigAbilityFragmentParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_INSERT_OFFSET))(map, param);
		}

		::System::Void _SetupAbility(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__SETUPABILITY_OFFSET))(this, entityHandle);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
