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
namespace Foundation::ViewObject { class ITraitEntityBuild; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17059EE0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17059FB0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDMOVEMENTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1705A3C0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDTIMESLOWCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1705A330)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17058370)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170584D0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170582F0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170594C0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170586A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x17059DF0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17058460)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x17059D60)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x17059CC0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17059520)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17058720)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ISGADGETDEFAULTTRAIT_OFFSET UNITYSDK_OFFSET(0x17059D70)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1705A9B0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1705A530)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17059B20)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17059380)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1705A470)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1705A960)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1705AA90)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1705AA50)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1705AAA0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1705AAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait_TypeDefinitionIndex = 62953;

	class GadgetDefaultTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait_TypeDefinitionIndex)->GetStaticField(0xDA80);
		}
		// static const ::System::String* DefaultPrefabPath; // 0x0
		::System::String* ShowName; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::Boolean EnableTimeSlow; // 0x28
		::System::Boolean EnableDither; // 0x29
		::System::String* DitherConfigKey; // 0x30
		::System::Boolean EnableMove; // 0x38
		::System::Boolean EnableRigidBodyInit; // 0x39
		::System::Boolean InitEntityDisable; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::System::String* get_FinalPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		static ::System::Boolean IsGadgetDefaultTrait(::Foundation::ViewObject::ITraitEntityBuild* trait)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ITraitEntityBuild*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ISGADGETDEFAULTTRAIT_OFFSET))(trait);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildModelComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDMODELCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildTimeSlowComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDTIMESLOWCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildMovementComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDMOVEMENTCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
