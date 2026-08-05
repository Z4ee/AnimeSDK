#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_39D831DE16C9E11B;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISVIEWREADY_OFFSET UNITYSDK_OFFSET(0x1998F5E0)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISWIDGETACTIVE_OFFSET UNITYSDK_OFFSET(0x1998F570)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x1998F310)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAJORAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x1998F4B0)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MINORAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x1998F510)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x1998F320)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1998F300)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x199900E0)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_SETENTITY_OFFSET UNITYSDK_OFFSET(0x1998F5F0)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_UPDATEWIDGET_OFFSET UNITYSDK_OFFSET(0x1998F900)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19990130)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportSelectionWidgetBase_TypeDefinitionIndex = 76608;

	class TeleportSelectionWidgetBase : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* WIDGET_GO_NAME; // 0x0
		::MoleMole::Battle::Entity* _teleportEntity; // 0x318
		::Class_3_39D831DE16C9E11B* _teleportComponent; // 0x320
		::Class_3_C93CC3D2C2AC4067* _teleportModelComponent; // 0x328
		::MoleMole::Config::ConfigTeleportSelection3C* _config3C; // 0x330
		::UnityEngine::Camera* _uiCamera; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Camera* get_mainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAINCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* get_uiCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_UICAMERA_OFFSET))(this);
		}

		::System::Single get_MajorAxisLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAJORAXISLENGTH_OFFSET))(this);
		}

		::System::Single get_MinorAxisLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MINORAXISLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsWidgetActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISWIDGETACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsViewReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISVIEWREADY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_SETENTITY_OFFSET))(this, entity);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_UPDATEWIDGET_OFFSET))(this);
		}
	};
}
