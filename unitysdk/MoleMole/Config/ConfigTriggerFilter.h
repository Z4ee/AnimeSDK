#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/ConfigCommonLevelData.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
template <typename T> class Class_0_16E4307DCC419505_298;

#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F3B920)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18F3ADE0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x18F3AE60)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0F55C4AB4CA5F771_OFFSET UNITYSDK_OFFSET(0x18F3C4D0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_231B01DB7DE43D31_OFFSET UNITYSDK_OFFSET(0x18F3C550)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_2523E92EDF140585_OFFSET UNITYSDK_OFFSET(0x18F3C610)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_290D2DFAA5518346_OFFSET UNITYSDK_OFFSET(0x18F3C160)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_7F84A2298ABCDEE9_OFFSET UNITYSDK_OFFSET(0x18F3C770)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18F3C440)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_B02211135C5665F9_OFFSET UNITYSDK_OFFSET(0x18F3B980)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x18F3ABB0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x18F3AD70)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C9158580CC3C5ACF_OFFSET UNITYSDK_OFFSET(0x18F3AC70)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_D6C96FD6EC4C4E01_OFFSET UNITYSDK_OFFSET(0x18F3C030)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F2962016E737497B_OFFSET UNITYSDK_OFFSET(0x18F3C4C0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F8CB9CBFCD062428_OFFSET UNITYSDK_OFFSET(0x18F3C220)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3C4B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerFilter_TypeDefinitionIndex = 84871;

	class ConfigTriggerFilter : public ::MoleMole::Config::ConfigCommonLevelData
	{
	public:
		// static const ::System::String* ConfigTriggerFilterTypeName; // 0x0
		::System::Boolean bFilterEntityType; // 0x18
		::MoleMole::Config::EntityType FilterEntityType; // 0x1C
		::System::String* FilterColliderTag; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* AbilityTarget; // 0x28
		::System::Boolean ForceLocalAvatar; // 0x30
		::System::Boolean ExitOnDestroy; // 0x31
		::System::Collections::Generic::List_1<::System::String*>* EntityTags; // 0x38
		::System::Nullable_1<::MoleMole::Ability::InLevelAbilityTargetMask> AbilityTargets; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigCommonLevelData* Method_2_C9158580CC3C5ACF()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C9158580CC3C5ACF_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_D6C96FD6EC4C4E01(::MoleMole::EntityHandle a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_D6C96FD6EC4C4E01_OFFSET))(this, a1, a2);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::String* Method_2_F2962016E737497B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F2962016E737497B_OFFSET))(this);
		}

		static ::System::Boolean Method_2_0F55C4AB4CA5F771(::System::String* a1, ::MoleMole::Config::ConfigTriggerFilter*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigTriggerFilter*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0F55C4AB4CA5F771_OFFSET))(a1, a2);
		}

		::MoleMole::Ability::InLevelAbilityTargetMask Method_2_231B01DB7DE43D31()
		{
			return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_231B01DB7DE43D31_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* Method_2_2523E92EDF140585(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_2523E92EDF140585_OFFSET))(a1);
		}

		::System::Boolean Method_2_B02211135C5665F9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_B02211135C5665F9_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_F8CB9CBFCD062428(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F8CB9CBFCD062428_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_290D2DFAA5518346(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_290D2DFAA5518346_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* Method_2_7F84A2298ABCDEE9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_7F84A2298ABCDEE9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
