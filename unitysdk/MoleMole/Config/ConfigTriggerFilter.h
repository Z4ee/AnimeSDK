#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63FBC8592676690F.h"
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
template <typename T> class Class_0_16E4307DCC419505_571;

#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x162656F0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16264910)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0673360CA437B9B0_OFFSET UNITYSDK_OFFSET(0x162669A0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0A0873EAFC9B74AE_OFFSET UNITYSDK_OFFSET(0x162661B0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x16264990)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0F55C4AB4CA5F771_OFFSET UNITYSDK_OFFSET(0x16266B20)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x16266780)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16266830)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_231B01DB7DE43D31_OFFSET UNITYSDK_OFFSET(0x162668E0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_2523E92EDF140585_OFFSET UNITYSDK_OFFSET(0x16266460)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_276318E499E3F96E_OFFSET UNITYSDK_OFFSET(0x16265750)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_290D2DFAA5518346_OFFSET UNITYSDK_OFFSET(0x162660F0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_437F254E96621315_OFFSET UNITYSDK_OFFSET(0x16265DA0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_467D90DF14F3942C_OFFSET UNITYSDK_OFFSET(0x16266080)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_55542C361C9A5E55_OFFSET UNITYSDK_OFFSET(0x162662F0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_7F84A2298ABCDEE9_OFFSET UNITYSDK_OFFSET(0x162665D0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x162663E0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_AD025F5C9174ACD8_OFFSET UNITYSDK_OFFSET(0x16265EF0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x16264730)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16264900)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C9158580CC3C5ACF_OFFSET UNITYSDK_OFFSET(0x16264800)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F2962016E737497B_OFFSET UNITYSDK_OFFSET(0x162665C0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16266450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerFilter_TypeDefinitionIndex = 73726;

	class ConfigTriggerFilter : public ::MoleMole::Config::ConfigCommonLevelData
	{
	public:
		// static const ::System::String* ConfigTriggerFilterTypeName; // 0x0
		::Enum_3_63FBC8592676690F TriggerFilterType; // 0x18
		::System::Boolean UseSubTrigger; // 0x1C
		::System::Boolean ExitOnDestroy; // 0x1D
		::System::Boolean UseContinuousCheck; // 0x1E
		::MoleMole::Config::EntityType FilterEntityType; // 0x20
		::System::String* FilterColliderTag; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* AbilityTarget; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* EntityTags; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* ExcludeEntityTags; // 0x40
		::System::Nullable_1<::MoleMole::Ability::InLevelAbilityTargetMask> AbilityTargets; // 0x48
		::System::Nullable_1<::System::Boolean> HasAnyValidEntityTagsCache; // 0x50
		::System::Nullable_1<::System::Boolean> HasAnyValidExcludeEntityTagsCache; // 0x52

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

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_437F254E96621315(::UnityEngine::Collider* a1, ::MoleMole::EntityHandle& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_437F254E96621315_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_AD025F5C9174ACD8(::MoleMole::EntityHandle a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_AD025F5C9174ACD8_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_55542C361C9A5E55(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_55542C361C9A5E55_OFFSET))(this, a1);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_2_276318E499E3F96E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_276318E499E3F96E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* Method_2_2523E92EDF140585(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_2523E92EDF140585_OFFSET))(a1);
		}

		::System::String* Method_2_F2962016E737497B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_F2962016E737497B_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigTriggerFilter* Method_2_7F84A2298ABCDEE9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTriggerFilter*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_7F84A2298ABCDEE9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0A0873EAFC9B74AE(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0A0873EAFC9B74AE_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_290D2DFAA5518346(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_290D2DFAA5518346_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean Method_2_467D90DF14F3942C(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_467D90DF14F3942C_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1808E1CF7A125519_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
		}

		::MoleMole::Ability::InLevelAbilityTargetMask Method_2_231B01DB7DE43D31()
		{
			return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_231B01DB7DE43D31_OFFSET))(this);
		}

		static ::System::Boolean Method_2_0F55C4AB4CA5F771(::System::String* a1, ::MoleMole::Config::ConfigTriggerFilter*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigTriggerFilter*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0F55C4AB4CA5F771_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_0673360CA437B9B0(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERFILTER_METHOD_2_0673360CA437B9B0_OFFSET))(a1);
		}
	};
}
