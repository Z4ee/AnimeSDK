#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C099C4133FE8CA88.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
class Class_3_7DFC3B02FA84E062;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192099A0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19209AA0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19209950)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1920B6F0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1920A4E0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1920BF90)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19209A90)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INITNPCNAME_OFFSET UNITYSDK_OFFSET(0x1920C0E0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1920B750)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1920A560)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1920C020)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1920BE00)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1920B5B0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1920C750)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1920C770)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1920C780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NamePanelTrait_TypeDefinitionIndex = 77670;

	class NamePanelTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean HideNamePanel; // 0x18
		::Enum_3_C099C4133FE8CA88 NameSource; // 0x1C
		::System::String* NameTextMapKey; // 0x20
		::System::Boolean EnableInteractionDetection; // 0x28
		::System::Boolean HideWhenNoInteract; // 0x29
		::System::Boolean HideWhenInteractMaxPriorityActivated; // 0x2A
		::System::Boolean EnableSpaceDetection; // 0x2B
		::System::Single FadeInThreshold; // 0x2C
		::System::Single FadeOutThreshold; // 0x30
		::System::Single HeightThreshold; // 0x34
		::System::Boolean IgnoreOcclusionCheck; // 0x38
		::Class_3_7DFC3B02FA84E062* _component; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::NamePanelTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::NamePanelTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::NamePanelTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::NamePanelTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void InitNpcName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INITNPCNAME_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
