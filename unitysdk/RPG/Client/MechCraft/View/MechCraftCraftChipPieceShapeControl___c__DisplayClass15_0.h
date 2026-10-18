#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::MechCraft::View { class MechCraftCraftChipPieceShapeControl; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD604810)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0___REFRESHGEOMETRY_B__0_OFFSET UNITYSDK_OFFSET(0xD6048E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0___REFRESHGEOMETRY_B__1_OFFSET UNITYSDK_OFFSET(0xD604A70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipPieceShapeControl___c__DisplayClass15_0_TypeDefinitionIndex = 79869;

	class MechCraftCraftChipPieceShapeControl___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftChipPieceShapeControl* __4__this; // 0x10
		::UnityEngine::Vector2 boundingBoxSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* __RefreshGeometry_b__0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0___REFRESHGEOMETRY_B__0_OFFSET))(this);
		}

		::System::Action* __RefreshGeometry_b__1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECESHAPECONTROL___C__DISPLAYCLASS15_0___REFRESHGEOMETRY_B__1_OFFSET))(this, a1, a2);
		}
	};
}
