#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_48D56DACBE4271BC;
class Class_2_0DF21ECD13E1233B;
class Class_3_7472FB6CC4015359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x15F0CDD0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15F0CA50)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F0C940)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F0C9D0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F0C820)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F0C8D0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_REFRESHAIDINGVIEW_OFFSET UNITYSDK_OFFSET(0x15F0D290)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x15F0D520)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_SETUPAVATARICON_OFFSET UNITYSDK_OFFSET(0x15F0CFE0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_SETUPENTITY_OFFSET UNITYSDK_OFFSET(0x15F0CB10)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__BUILDDATABINDING_B__20_0_OFFSET UNITYSDK_OFFSET(0x15F0D8D0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F0D870)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0D7B0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15F0DCB0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F0DD40)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F0DDD0)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F0DE60)
#define MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F0DEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnlineBottomBarWidgetController_TypeDefinitionIndex = 73677;

	class UIOnlineBottomBarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_PatternColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIOnlineBottomBarWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE60);
		}
		static ::System::Int32* StaticGet_EndColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIOnlineBottomBarWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE64);
		}
		static ::System::Int32* StaticGet_StartColorShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIOnlineBottomBarWidgetController_TypeDefinitionIndex)->GetStaticField(0xEE68);
		}
		::Class_2_0DF21ECD13E1233B* _view; // 0x2C0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2C8
		::System::Boolean _hasBindView; // 0x2D0
		::MoleMole::Battle::Entity* _entity; // 0x2D8
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x2E0
		::System::Boolean inAiding; // 0x2E8
		::UnityEngine::Color _beingRevivedStartColor; // 0x2EC
		::UnityEngine::Color _beingRevivedEndColor; // 0x2FC
		::UnityEngine::Color _beingRevivedPatternColor; // 0x30C
		::System::Single ReviveWidth; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void SetupEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_SETUPENTITY_OFFSET))(this, entityID);
		}

		::System::Void SetupAvatarIcon(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_SETUPAVATARICON_OFFSET))(this, entity);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void RefreshAidingView(::System::Boolean isAiding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_REFRESHAIDINGVIEW_OFFSET))(this, isAiding);
		}

		::System::Void RefreshProgress(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET))(this, ratio);
		}

		::System::Void _BuildDataBinding_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER__BUILDDATABINDING_B__20_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEBOTTOMBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
