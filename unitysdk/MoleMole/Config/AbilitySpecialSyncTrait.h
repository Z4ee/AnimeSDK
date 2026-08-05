#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Config { class AbilitySpecialSyncEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x116E1D00)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x116E11C0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E12C0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E1170)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E1810)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116E1460)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x116E1BF0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x116E12B0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E1870)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x116E14E0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x116E1A60)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x116E16D0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x116E1FB0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x116E1FC0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x116E1FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialSyncTrait_TypeDefinitionIndex = 70647;

	class AbilitySpecialSyncTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AbilitySpecialSyncEntry*>* SyncByAbility; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AbilitySpecialSyncTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AbilitySpecialSyncTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AbilitySpecialSyncTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AbilitySpecialSyncTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
