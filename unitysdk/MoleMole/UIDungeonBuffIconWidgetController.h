#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0C4DABD06F45A7DA;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E815B0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E81640)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETHINT_OFFSET UNITYSDK_OFFSET(0x15E819A0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETIMG_OFFSET UNITYSDK_OFFSET(0x15E81B10)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0x15E816C0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E81BA0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E81C00)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E81C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIDungeonBuffIconWidgetController_TypeDefinitionIndex = 72004;

	class UIDungeonBuffIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0C4DABD06F45A7DA* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetInfo(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETINFO_OFFSET))(this, id);
		}

		::System::Void SetHint(::System::Int32 hintType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETHINT_OFFSET))(this, hintType);
		}

		::System::Void SetImg(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETIMG_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
