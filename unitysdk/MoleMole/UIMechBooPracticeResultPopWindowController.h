#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_31D08DC027B35B8F;
class Class_2_4902A2CD45674E62;
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_DELAYRECOVERHP_OFFSET UNITYSDK_OFFSET(0x169C58D0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x169C5810)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x169C57B0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15761240)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157612D0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169C57C0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x169C5B00)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15761380)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15761340)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__ONUIOPEN_B__15_0_OFFSET UNITYSDK_OFFSET(0x15761400)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15761430)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157614C0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157614D0)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157614E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex = 56474;

	class UIMechBooPracticeResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_UseHPScaleOffsetShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x111F0);
		}
		static ::System::Int32* StaticGet_RampColorFShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x111F4);
		}
		static ::System::Int32* StaticGet_RampColorEShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x111F8);
		}
		static ::System::Int32* StaticGet_RecoverPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticeResultPopWindowController_TypeDefinitionIndex)->GetStaticField(0x111FC);
		}
		::Class_2_4902A2CD45674E62* _view; // 0x318
		::Class_2_31D08DC027B35B8F* _model; // 0x320
		::System::String* HpPercentage; // 0x328
		::System::Single _recoverLerpRatio; // 0x330
		::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* _tweenerCore; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::Class_2_31D08DC027B35B8F* get_Model()
		{
			return ((::Class_2_31D08DC027B35B8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void DelayRecoverHP(::System::Int32 oldHP, ::System::Int32 newHP, ::System::Int32 maxHP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_DELAYRECOVERHP_OFFSET))(this, oldHP, newHP, maxHP);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER__ONUIOPEN_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
