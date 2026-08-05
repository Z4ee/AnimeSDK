#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_68BB47505EAED423.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
class Class_3_EF4ADCBB2ABD6E47;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B556950)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B5553B0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5554B0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5553A0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B5562A0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5559D0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B556860)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B5554A0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B556300)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B555A50)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B556A00)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B5566D0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B556160)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B556A80)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B556A90)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B556AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcIkTrait_TypeDefinitionIndex = 81721;

	class ConfigNpcIkTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean EnablePlayerLookAtIk; // 0x18
		::Enum_3_68BB47505EAED423 NpcLookAtIkType; // 0x1C
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

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
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

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
