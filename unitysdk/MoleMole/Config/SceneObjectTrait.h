#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x1B567920)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B566D70)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B566E70)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B566D60)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B5673A0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B567010)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B567800)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B566E60)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B567400)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B567090)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B567670)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B567260)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B567C90)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B567CA0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B567CB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneObjectTrait_TypeDefinitionIndex = 83062;

	class SceneObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SceneObjectID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SceneObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SceneObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SceneObjectTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SceneObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* extraComponents)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_BUILDENTITY_OFFSET))(this, handle, extraComponents);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
