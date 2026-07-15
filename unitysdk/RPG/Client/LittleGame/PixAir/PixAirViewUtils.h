#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_103;
class Class_2_68CB91321C3E76A7;
namespace RPG::Client::LittleGame::PixAir { class PixAirEquipView; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneView; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEWPATH_OFFSET UNITYSDK_OFFSET(0x19AC22E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0x19AC1FD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLANEVIEW_OFFSET UNITYSDK_OFFSET(0x19AC1EB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETPLAYERICONPATH_OFFSET UNITYSDK_OFFSET(0x19AC20F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_1_OFFSET UNITYSDK_OFFSET(0x19AB7280)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_SETUI3DLAYERS_OFFSET UNITYSDK_OFFSET(0x19ABDE20)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirViewUtils_TypeDefinitionIndex = 73343;

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

		static ::System::String* GetEquipViewPath(::Class_1_43BD383C98B4C0C5_103* a1)
		{
			return ((::System::String*(*)(::Class_1_43BD383C98B4C0C5_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRVIEWUTILS_GETEQUIPVIEWPATH_OFFSET))(a1);
		}
	};
}
