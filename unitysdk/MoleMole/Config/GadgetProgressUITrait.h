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

#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD6DBA0)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD6CC40)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6CD40)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6CBD0)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6D730)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6D0A0)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD6CD30)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6D790)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6D120)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1BD6DC30)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6DA10)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6D5F0)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6DC80)
#define MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6DC90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetProgressUITrait_TypeDefinitionIndex = 67507;

	class GadgetProgressUITrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* GadgetProgressUIType; // 0x18
		::System::String* AnchorTargetAttachPoint; // 0x20
		::System::Single UIScale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GadgetProgressUITrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GadgetProgressUITrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GadgetProgressUITrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GadgetProgressUITrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETPROGRESSUITRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
