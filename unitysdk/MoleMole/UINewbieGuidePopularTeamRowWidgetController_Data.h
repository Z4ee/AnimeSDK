#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x168E50B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuidePopularTeamRowWidgetController_Data_TypeDefinitionIndex = 71646;

	class UINewbieGuidePopularTeamRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarIds; // 0x10
		::System::Action_1<::System::Int32>* OnCheckClick; // 0x18
		::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource Source; // 0x20
		::System::Int32 DisplayNumber; // 0x24
		::System::Boolean IsSelected; // 0x28
		::System::Int32 Index; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
