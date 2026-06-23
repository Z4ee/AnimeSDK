#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x10D13660)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x10D137C0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x10D13610)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D14900)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10D139B0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D15090)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x10D13750)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D14960)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x10D13A30)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x10D15120)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D14EF0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x10D147C0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15270)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x10D15290)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D152A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NamePanelTrait_TypeDefinitionIndex = 39817;

	class NamePanelTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* NameTextMapKey; // 0x18
		::System::Boolean EnableInteractionDetection; // 0x20
		::System::Boolean HideWhenNoInteract; // 0x21
		::System::Boolean HideWhenInteractMaxPriorityActivated; // 0x22
		::System::Boolean EnableSpaceDetection; // 0x23
		::System::Single FadeInThreshold; // 0x24
		::System::Single FadeOutThreshold; // 0x28
		::System::Single HeightThreshold; // 0x2C
		::System::Boolean IgnoreOcclusionCheck; // 0x30

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

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
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

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
