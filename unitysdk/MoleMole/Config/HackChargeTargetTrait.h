#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5661FB5E3DE51048.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17E35F60)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17E35290)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E353F0)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E35220)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E35A60)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E35500)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17E35380)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E35AC0)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17E35580)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x17E36240)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x17E36290)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E35DC0)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17E35920)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x17E361F0)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36590)
#define MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E365A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackChargeTargetTrait_TypeDefinitionIndex = 86022;

	class HackChargeTargetTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_5661FB5E3DE51048>* HackChargeType; // 0x18
		::System::String* HackChargeConfigKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackChargeTargetTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackChargeTargetTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackChargeTargetTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackChargeTargetTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGETARGETTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
