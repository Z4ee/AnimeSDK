#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1956D0F0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__PLAYEXPANIMSEGMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1956D100)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__PLAYEXPANIMSEGMENT_B__1_OFFSET UNITYSDK_OFFSET(0x1956D1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass45_0_TypeDefinitionIndex = 73645;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x18
		::System::Action* onComplete; // 0x20
		::System::Single toRatio; // 0x28
		::System::Single animTime; // 0x2C
		::System::Single fromRatio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExpAnimSegment_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__PLAYEXPANIMSEGMENT_B__0_OFFSET))(this);
		}

		::System::Void _PlayExpAnimSegment_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__PLAYEXPANIMSEGMENT_B__1_OFFSET))(this);
		}
	};
}
