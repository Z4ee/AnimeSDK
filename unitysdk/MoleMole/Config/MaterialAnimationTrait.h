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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C46FF10)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C46EDB0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C46EEB0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C46ED40)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46F8B0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46F210)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C46FEA0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C46EEA0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46F910)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46F290)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1C46FF90)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46FD10)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46F770)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C470650)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C470660)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C470670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialAnimationTrait_TypeDefinitionIndex = 59758;

	class MaterialAnimationTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MaterialPropertyList; // 0x18
		::System::String* Tag; // 0x20
		::System::Int32 Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
