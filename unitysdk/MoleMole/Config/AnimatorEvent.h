#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/Enum_3_AC9B5424B44F3EDE.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x122EE310)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDPRELOAD_OFFSET UNITYSDK_OFFSET(0x122EE360)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x122EE5A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x122EE510)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0DB0990807B30DBB_OFFSET UNITYSDK_OFFSET(0x122EF360)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_13A81F491916B387_OFFSET UNITYSDK_OFFSET(0x122EE800)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_64A7857BCFE98A49_OFFSET UNITYSDK_OFFSET(0x122EF170)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_68551447D07390F7_OFFSET UNITYSDK_OFFSET(0x122EE6D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_CC205ACED071A76F_OFFSET UNITYSDK_OFFSET(0x122EE4C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x122EE670)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x122EE630)
#define MOLEMOLE_CONFIG_ANIMATOREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x122EE3B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEvent_TypeDefinitionIndex = 38659;

	class AnimatorEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimateZoneTags; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimateZoneTagsBlackList; // 0x18
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::MoleMole::Config::EntityType>*>* MPAnimateZoneTagsWhiteList; // 0x20
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::MoleMole::Config::EntityType>*>* MPAnimateZoneTagsBlackList; // 0x28
		::System::Single normalizedTime; // 0x30
		::System::Boolean maxFrame; // 0x34
		::System::Int32 frame; // 0x38
		::System::Boolean forceTrigger; // 0x3C
		::System::Boolean forceTriggerOnTransitionIn; // 0x3D
		::System::Boolean forceTriggerOnTransitionOut; // 0x3E
		::Enum_3_AC9B5424B44F3EDE _callbackFlags; // 0x40
		::System::Type* typeCache; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedHandleBeforePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDHANDLEBEFOREPHYSICS_OFFSET))(this);
		}

		::System::Boolean get_NeedPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDPRELOAD_OFFSET))(this);
		}

		::System::Void Method_1_CC205ACED071A76F(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_CC205ACED071A76F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_1_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Config::AnimatorEventEntry* Method_1_FB6392A8F30862C7()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_FB6392A8F30862C7_OFFSET))(this);
		}

		::System::Void Method_1_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::AnimatorEvent* Method_1_68551447D07390F7()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_68551447D07390F7_OFFSET))(this);
		}

		::System::Boolean Method_1_13A81F491916B387(::Class_3_F33F9DC5F4112336* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_13A81F491916B387_OFFSET))(this, a1);
		}

		::System::Void Method_1_64A7857BCFE98A49(::MoleMole::Config::AnimatorEventEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_64A7857BCFE98A49_OFFSET))(this, a1);
		}

		::System::Void Method_1_0DB0990807B30DBB(::MoleMole::Config::AnimatorEventEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_METHOD_1_0DB0990807B30DBB_OFFSET))(this, a1);
		}
	};
}
