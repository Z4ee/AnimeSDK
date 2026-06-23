#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A5826B9C7D0480D.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
class Class_3_EF4ADCBB2ABD6E47;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A352120)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A350EC0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A351020)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A350EB0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A351A60)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A351190)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A352030)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A350FB0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A351AC0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A351210)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A3521D0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A351E90)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A351920)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A352250)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A352260)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A352270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcIkTrait_TypeDefinitionIndex = 59412;

	class ConfigNpcIkTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean EnablePlayerLookAtIk; // 0x18
		::Enum_3_2A5826B9C7D0480D NpcLookAtIkType; // 0x1C
		::System::Single NpcLookAtIkSectorRadius; // 0x20
		::System::Single NpcLookAtIkSectorAngle; // 0x24
		::System::Boolean EnableNpcFootIk; // 0x28
		::Class_3_EF4ADCBB2ABD6E47* component; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
