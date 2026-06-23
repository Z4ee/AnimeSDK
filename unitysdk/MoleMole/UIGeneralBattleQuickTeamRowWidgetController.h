#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2C64B4F3EF973B0C;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177E3B00)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177E3B70)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x177E3C30)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETINTEAM_OFFSET UNITYSDK_OFFSET(0x177E3E90)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETMASK_OFFSET UNITYSDK_OFFSET(0x177E3CE0)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x177E3DC0)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177E3F30)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177E3F90)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x177E4030)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTeamRowWidgetController_TypeDefinitionIndex = 81998;

	class UIGeneralBattleQuickTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_2C64B4F3EF973B0C* get__viewModel()
		{
			return ((::Class_2_2C64B4F3EF973B0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, globalData);
		}

		::System::Void SetMask(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETMASK_OFFSET))(this, active);
		}

		::System::Void SetSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetInTeam(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER_SETINTEAM_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}
	};
}
