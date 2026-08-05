#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIZenkovDifficultyNumWidgetController_AnimPlayContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0308CF096076E70D;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_CHECKANIMATIONPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x191A4E40)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_EXECUTEANIM_OFFSET UNITYSDK_OFFSET(0x191A4EF0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_EXECUTECHANGENUMBER_OFFSET UNITYSDK_OFFSET(0x13520FB0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET_NUM_OFFSET UNITYSDK_OFFSET(0x191A49C0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__SWITCHANIMTAG_OFFSET UNITYSDK_OFFSET(0x13521600)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__SWITCHDOWNANIMTAG_OFFSET UNITYSDK_OFFSET(0x135216C0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191A4440)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_INITMATERIALS_OFFSET UNITYSDK_OFFSET(0x191A4560)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191A44B0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_SET_NUM_OFFSET UNITYSDK_OFFSET(0x191A4B00)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x135213D0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13521780)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER__EXECUTECHANGENUMBER_B__18_0_OFFSET UNITYSDK_OFFSET(0x135217E0)
#define MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x135218A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDifficultyNumWidgetController_TypeDefinitionIndex = 82722;

	class UIZenkovDifficultyNumWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FDFE69FE7B72463B* _anim; // 0x2C0
		::UnityEngine::Material* _noValueMat; // 0x2C8
		::UnityEngine::Material* _hasValueMat; // 0x2D0
		::System::Int32 _lastDigit; // 0x2D8
		::System::Boolean _lastHasValue; // 0x2DC
		::MoleMole::UIZenkovDifficultyNumWidgetController_AnimPlayContext nextContext; // 0x2E0
		::System::Boolean isWaiting; // 0x2EC
		::System::String* savedAnimName; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_0308CF096076E70D* get__viewModel()
		{
			return ((::Class_2_0308CF096076E70D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Int32 get_Num()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_SET_NUM_OFFSET))(this, value);
		}

		::System::Void InitMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_INITMATERIALS_OFFSET))(this);
		}

		::System::Boolean CheckAnimationPlayContext(::MoleMole::UIZenkovDifficultyNumWidgetController_AnimPlayContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIZenkovDifficultyNumWidgetController_AnimPlayContext))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_CHECKANIMATIONPLAYCONTEXT_OFFSET))(this, context);
		}

		::System::Void ExecuteAnim(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_EXECUTEANIM_OFFSET))(this, delay);
		}

		::System::Void ExecuteChangeNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_EXECUTECHANGENUMBER_OFFSET))(this);
		}

		::System::Void StopAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_STOPANIMATION_OFFSET))(this);
		}

		::System::Int32 get__switchAnimTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__SWITCHANIMTAG_OFFSET))(this);
		}

		::System::Int32 get__switchDownAnimTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER_GET__SWITCHDOWNANIMTAG_OFFSET))(this);
		}

		::System::Void _ExecuteChangeNumber_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER__EXECUTECHANGENUMBER_B__18_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYNUMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
