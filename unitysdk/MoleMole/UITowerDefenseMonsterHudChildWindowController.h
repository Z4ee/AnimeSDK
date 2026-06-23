#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_C43E2C38873E034C.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_BC02A473BC704E75;
class Class_2_1A39E1B51756BF41;
class Class_2_4497C502C5DEB38E;
class Class_3_7472FB6CC4015359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_DETACH_OFFSET UNITYSDK_OFFSET(0x156D22B0)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_FIXPOSITION_OFFSET UNITYSDK_OFFSET(0x156D3460)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x156D18D0)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x156D1630)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_INITIALIZEFILL_OFFSET UNITYSDK_OFFSET(0x156D2040)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_INITUIDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x156D1A30)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D2B70)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x156D2540)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x156D25F0)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D31B0)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156D1640)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156D1690)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x156D20E0)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x156D2B00)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x156D2C00)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156D3640)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156D3590)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156D3680)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156D3710)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156D3720)
#define MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156D3730)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseMonsterHudChildWindowController_TypeDefinitionIndex = 58487;

	class UITowerDefenseMonsterHudChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_HpPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseMonsterHudChildWindowController_TypeDefinitionIndex)->GetStaticField(0x12750);
		}
		::Class_2_4497C502C5DEB38E* _view; // 0x318
		::System::UInt32 _entityID; // 0x320
		::System::Single _offset; // 0x324
		::UnityEngine::GameObject* _target; // 0x328
		::UnityEngine::Transform* _lockPoint; // 0x330
		::System::Single _maxHpValue; // 0x338
		::Class_1_BC02A473BC704E75* _damagePercent; // 0x340
		::System::Boolean _goodMaterialCloned; // 0x348
		::System::Boolean _evilMaterialCloned; // 0x349
		::System::Single _previousHpPercent; // 0x34C
		::Class_2_1A39E1B51756BF41* _fill; // 0x350
		::System::Single _deltaY; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitUIDefaultState(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_INITUIDEFAULTSTATE_OFFSET))(this, entity);
		}

		::System::Boolean& InitializeFill(::Class_3_7472FB6CC4015359* hudComponent)
		{
			return ((::System::Boolean&(*)(::PVOID, ::Class_3_7472FB6CC4015359*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_INITIALIZEFILL_OFFSET))(this, hudComponent);
		}

		::System::Void RefreshData(::System::UInt32 entityID, ::UnityEngine::GameObject* target, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_REFRESHDATA_OFFSET))(this, entityID, target, offset);
		}

		::System::Void Detach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_DETACH_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnPropertyChange(::System::UInt32 _0, ::MoleMole::Config::BaseProperty property, ::System::String* _1, ::System::Double _2, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONPROPERTYCHANGE_OFFSET))(this, _0, property, _1, _2, value);
		}

		::System::Void ShowTip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_SHOWTIP_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void UpdatePosition(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_UPDATEPOSITION_OFFSET))(this, canvas);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixPosition(::UnityEngine::GameObject* popup, ::Enum_3_C43E2C38873E034C state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_C43E2C38873E034C))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_FIXPOSITION_OFFSET))(this, popup, state);
		}

		::MoleMole::Battle::Entity* get_Entity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMONSTERHUDCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
