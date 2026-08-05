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

#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19FF3E60)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19FF2E40)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF2F40)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF2DF0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF3900)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF32A0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19FF2F30)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF3960)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF3320)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x19FF4730)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF3CD0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF37C0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x19FF43C0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_TRYUNBINDCAPTUREDMODEL_OFFSET UNITYSDK_OFFSET(0x19FF47A0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF4A70)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF4A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetModelCaptureTrait_TypeDefinitionIndex = 84937;

	class GadgetModelCaptureTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* Key; // 0x18
		::System::Boolean UseOverrideEnableState; // 0x20
		::System::Boolean OverrideEnableState; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Boolean TryUnbindCapturedModel(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_TRYUNBINDCAPTUREDMODEL_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
