#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_1A39E1B51756BF41;
class Class_2_47BB065BE5107FA1;
class Class_2_54FE0EDA9F278B5B;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15F04780)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F04790)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_INITBTN_OFFSET UNITYSDK_OFFSET(0x15F05720)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ISSHOWCURSKILLINFO_OFFSET UNITYSDK_OFFSET(0x15F06930)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F048A0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONLONGPRESSING_OFFSET UNITYSDK_OFFSET(0x15F06AF0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONPREVIEWCHANGE_OFFSET UNITYSDK_OFFSET(0x15F062D0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F04800)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONSPCHANGE_OFFSET UNITYSDK_OFFSET(0x15F05EE0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F05200)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_RESETPRESS_OFFSET UNITYSDK_OFFSET(0x15F05030)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_SETIMGMATERIAL_OFFSET UNITYSDK_OFFSET(0x15F05FC0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_TOGGLESKILLINFO_OFFSET UNITYSDK_OFFSET(0x15F067E0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_TRIGGERCLICK_OFFSET UNITYSDK_OFFSET(0x15F06A80)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F06E00)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__INITBTN_B__26_0_OFFSET UNITYSDK_OFFSET(0x15F075D0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__INITBTN_B__26_1_OFFSET UNITYSDK_OFFSET(0x15F082F0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_0_OFFSET UNITYSDK_OFFSET(0x15F071C0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_1_OFFSET UNITYSDK_OFFSET(0x15F071D0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_2_OFFSET UNITYSDK_OFFSET(0x15F07200)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_3_OFFSET UNITYSDK_OFFSET(0x15F07480)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F085A0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F08640)
#define MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F08650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasySkillButtonChildWindowController_TypeDefinitionIndex = 44789;

	class UIMonsterFantasySkillButtonChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MoleMole::LogicButtonInputType _logicButtonInputType; // 0x318
		::MoleMole::InputLogicEventType _logicEventType; // 0x31C
		::MoleMole::MonoInputKey* _inputKey; // 0x320
		::Class_2_B4378B46E0020E85* _btn; // 0x328
		::UnityEngine::RectTransform* _pressRoot; // 0x330
		::Class_2_1A39E1B51756BF41* _pressFill; // 0x338
		::System::UInt32 _longPressSoundPendingId; // 0x340
		::Il2CppArray<::System::String*>* _matPaths; // 0x348
		::Il2CppArray<::System::String*>* _lightMatPaths; // 0x350
		::Il2CppArray<::System::String*>* _lightGlowMatPaths; // 0x358
		::Il2CppArray<::UnityEngine::Material*>* _lightMaterials; // 0x360
		::Il2CppArray<::UnityEngine::Material*>* _lightGlowMaterials; // 0x368
		::Il2CppArray<::UnityEngine::Material*>* _mat; // 0x370
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _lightMaterialHandles; // 0x378
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _lightGlowMaterialHandles; // 0x380
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _matHandles; // 0x388
		::System::String* _fadeInAnim; // 0x390
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x398
		::System::Boolean _isResettingPress; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_54FE0EDA9F278B5B* get__viewModel()
		{
			return ((::Class_2_54FE0EDA9F278B5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitBtn(::Class_2_47BB065BE5107FA1* skillVM, ::System::Int32 index, ::MoleMole::LogicButtonInputType buttonInput, ::MoleMole::InputLogicEventType logicEventType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_47BB065BE5107FA1*, ::System::Int32, ::MoleMole::LogicButtonInputType, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_INITBTN_OFFSET))(this, skillVM, index, buttonInput, logicEventType);
		}

		::System::Void OnSpChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONSPCHANGE_OFFSET))(this);
		}

		::System::Void SetImgMaterial(::Class_2_1A39E1B51756BF41* img, ::System::Int32 index, ::Il2CppArray<::UnityEngine::Material*>* mat, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* handles, ::Il2CppArray<::System::String*>* paths)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_SETIMGMATERIAL_OFFSET))(this, img, index, mat, handles, paths);
		}

		::System::Void OnPreviewChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONPREVIEWCHANGE_OFFSET))(this);
		}

		::System::Void ToggleSkillInfo(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_TOGGLESKILLINFO_OFFSET))(this, isShow);
		}

		::System::Boolean IsShowCurSkillInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ISSHOWCURSKILLINFO_OFFSET))(this);
		}

		::System::Void TriggerClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_TRIGGERCLICK_OFFSET))(this);
		}

		::System::Void OnLongPressing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_ONLONGPRESSING_OFFSET))(this);
		}

		::System::Void ResetPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER_RESETPRESS_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_0_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_1_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__24_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_2_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__24_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__ONCREATEVIEWMODEL_B__24_3_OFFSET))(this);
		}

		::System::Void _InitBtn_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__INITBTN_B__26_0_OFFSET))(this);
		}

		::System::Void _InitBtn_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER__INITBTN_B__26_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLBUTTONCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
