#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B5654A0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B565500)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B5648E0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5649E0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B564890)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B564F30)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B564B80)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B5653B0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B5649D0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B5653A0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x1B565300)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B564F90)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B564C00)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B565720)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B565170)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B564DF0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B565900)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5658F0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B565910)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B565920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InnerStoreTrait_TypeDefinitionIndex = 44475;

	class InnerStoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InnerStoreTrait_TypeDefinitionIndex)->GetStaticField(0x11E60);
		}
		::System::String* PrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::InnerStoreTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::InnerStoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::InnerStoreTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::InnerStoreTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::System::String* get_FinalPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildModelComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDMODELCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
