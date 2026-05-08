#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole { class UIMainCityPageController; }
namespace MoleMole::GalGame { class MainCityChatShowPostConfig; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B8F630)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__ONOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x16B8F640)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__ONOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x16B8F660)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowPostConfig___c__DisplayClass14_0_TypeDefinitionIndex = 44354;

	class MainCityChatShowPostConfig___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__3; // 0x10
		::MoleMole::UIMainCityPageController* main; // 0x18
		::MoleMole::GalGame::MainCityChatShowPostConfig* __4__this; // 0x20
		::System::Action_1<::System::String*>* __9__2; // 0x28
		::Class_2_1737D2629B3D075C* node; // 0x30
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__2(::System::String* reply)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__ONOPEN_B__2_OFFSET))(this, reply);
		}

		::System::Void _OnOpen_b__3(::System::String* reply)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_0__ONOPEN_B__3_OFFSET))(this, reply);
		}
	};
}
