#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD6F7E0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD6EDC0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6EEC0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6ED70)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6F410)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6F060)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD6EEB0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6F470)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6F0E0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1BD6F900)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1BD6F950)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6F650)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6F2D0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1BD6F8B0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6FDA0)
#define MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6FDB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackChargeSourceTrait_TypeDefinitionIndex = 52987;

	class HackChargeSourceTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* HackChargeConfigKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackChargeSourceTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackChargeSourceTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackChargeSourceTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackChargeSourceTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKCHARGESOURCETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
