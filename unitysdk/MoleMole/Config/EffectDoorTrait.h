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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x170BCB70)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x170BB6C0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170BB820)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170BB6B0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BC120)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170BB970)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170BC620)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x170BB7B0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BC180)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x170BB9F0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x170BCBF0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x170BC700)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BC480)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x170BBFE0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x170BCD40)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170BCD60)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170BCD70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectDoorTrait_TypeDefinitionIndex = 49620;

	class EffectDoorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		// static const ::System::Single OverrideDoorOffsetLeftRight; // 0x0
		::System::Single Length; // 0x18
		::System::Single Width; // 0x1C
		::System::Single Height; // 0x20
		::System::Boolean UseOneWayDoor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EffectDoorTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EffectDoorTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
