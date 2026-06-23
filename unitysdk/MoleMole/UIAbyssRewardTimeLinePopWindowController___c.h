#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141D38A0)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141D38E0)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARD_B__13_0_OFFSET UNITYSDK_OFFSET(0x141D3900)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x141D38F0)
#define MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__PLAYEXPANIM_B__30_2_OFFSET UNITYSDK_OFFSET(0x141D3910)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardTimeLinePopWindowController___c_TypeDefinitionIndex = 82468;

	class UIAbyssRewardTimeLinePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssRewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C6D0);
		}
		static ::MoleMole::UIAbyssRewardTimeLinePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssRewardTimeLinePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssRewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C6D8);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssRewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C6E0);
		}
		static ::System::Action** StaticGet___9__30_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssRewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C6E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Boolean _OnRspGetAllTaskReward_b__13_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARD_B__13_0_OFFSET))(this, x);
		}

		::System::Void _PlayExpAnim_b__30_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDTIMELINEPOPWINDOWCONTROLLER___C__PLAYEXPANIM_B__30_2_OFFSET))(this);
		}
	};
}
