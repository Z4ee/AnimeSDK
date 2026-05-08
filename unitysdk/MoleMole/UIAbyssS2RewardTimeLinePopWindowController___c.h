#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E1A890)
#define MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1A8D0)
#define MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__12_0_OFFSET UNITYSDK_OFFSET(0x11E1A8F0)
#define MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__12_1_OFFSET UNITYSDK_OFFSET(0x11E1A920)
#define MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARD_B__11_0_OFFSET UNITYSDK_OFFSET(0x11E1A8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardTimeLinePopWindowController___c_TypeDefinitionIndex = 75130;

	class UIAbyssS2RewardTimeLinePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45C70);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45C78);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45C80);
		}
		static ::MoleMole::UIAbyssS2RewardTimeLinePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RewardTimeLinePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardTimeLinePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45C88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnRspGetAllTaskReward_b__11_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARD_B__11_0_OFFSET))(this, x);
		}

		::System::Void _OnRspGetAllTaskRewardError_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__12_0_OFFSET))(this);
		}

		::System::Void _OnRspGetAllTaskRewardError_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDTIMELINEPOPWINDOWCONTROLLER___C__ONRSPGETALLTASKREWARDERROR_B__12_1_OFFSET))(this);
		}
	};
}
