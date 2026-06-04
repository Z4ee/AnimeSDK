#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_101;
class Class_2_68CB91321C3E76A7;
namespace RPG::Client::LittleGame::PixAir { class PixAirEquipView; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneView; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEWPATH_OFFSET UNITYSDK_OFFSET(0xBE468F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0xBE465E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLANEVIEW_OFFSET UNITYSDK_OFFSET(0xBE464C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLAYERICONPATH_OFFSET UNITYSDK_OFFSET(0xBE46700)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_1_OFFSET UNITYSDK_OFFSET(0xBE3BD50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_OFFSET UNITYSDK_OFFSET(0xBE42430)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirViewUtils_TypeDefinitionIndex = 71818;

	class PixAirViewUtils : public ::System::Object
	{
	public:
		static ::System::Void SetUI3DLayers(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_OFFSET))(a1);
		}

		static ::System::Void SetUI3DLayers_1(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_1_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirPlaneView* GetPlaneView(::Class_2_68CB91321C3E76A7* a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneView*(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLANEVIEW_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirEquipView* GetEquipView(::Class_2_68CB91321C3E76A7* a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirEquipView*(*)(::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEW_OFFSET))(a1);
		}

		static ::System::String* GetPlayerIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLAYERICONPATH_OFFSET))();
		}

		static ::System::String* GetEquipViewPath(::Class_1_43BD383C98B4C0C5_101* a1)
		{
			return ((::System::String*(*)(::Class_1_43BD383C98B4C0C5_101*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEWPATH_OFFSET))(a1);
		}
	};
}
