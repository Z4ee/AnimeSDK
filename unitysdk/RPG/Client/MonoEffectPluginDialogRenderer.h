#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogRendererBehavior_DialogRendererType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class DialogRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_DISPOSEDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0x1B380360)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1B3808F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0x1B380880)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGETRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B380980)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGET_OFFSET UNITYSDK_OFFSET(0x1B380820)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1B3808E0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_0C6D78F7FB2736C2_OFFSET UNITYSDK_OFFSET(0x1B37F730)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x1B37F560)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1B37F850)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1B37F8A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1B37F5B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_B93DCFC57470A0D2_OFFSET UNITYSDK_OFFSET(0x1B37F950)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x1B37F6B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_F86BB4A64EB8E850_OFFSET UNITYSDK_OFFSET(0x1B37F9D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_ONVIEWMODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1B37FA80)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_REFRESHDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0x1B3807A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_RESETDIALOGRENDERER_OFFSET UNITYSDK_OFFSET(0x1B380130)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B380B20)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B381300)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_TypeDefinitionIndex = 69959;

	class MonoEffectPluginDialogRenderer : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::RPG::Client::DialogRendererBehavior_DialogRendererType JNGECEAMGJE; // 0x170
		::RPG::Client::DialogRenderer* DialogRenderer; // 0x178
		::RPG::Client::TAUtils::MaterialPropertiesCollection* OverrideProperties; // 0x180
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* BDPBDLLKPFA; // 0x188
		::Il2CppArray<::UnityEngine::Renderer*>* CLGBKMEMCKC; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_1092C5537716905B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_1092C5537716905B_OFFSET))(this);
		}

		::System::Void Method_8_BD658202BB4C4431()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_BD658202BB4C4431_OFFSET))(this);
		}

		::System::Void Method_8_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Boolean Method_8_B93DCFC57470A0D2(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_B93DCFC57470A0D2_OFFSET))(this, a1);
		}

		::System::Void Method_8_F86BB4A64EB8E850(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_F86BB4A64EB8E850_OFFSET))(this, a1);
		}

		::System::Void OnViewModeStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_ONVIEWMODESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void Method_8_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_8_0C6D78F7FB2736C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_0C6D78F7FB2736C2_OFFSET))(this);
		}

		::System::Void Method_8_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_METHOD_8_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void ResetDialogRenderer(::RPG::Client::DialogRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_RESETDIALOGRENDERER_OFFSET))(this, a1);
		}

		::System::Void DisposeDialogRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_DISPOSEDIALOGRENDERER_OFFSET))(this);
		}

		::System::Void RefreshDialogRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_REFRESHDIALOGRENDERER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_DialogTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGET_OFFSET))(this);
		}

		::UnityEngine::Camera* get_DialogCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGCAMERA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_MATERIALS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_DialogTargetRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_GET_DIALOGTARGETRENDERERS_OFFSET))(this);
		}
	};
}
