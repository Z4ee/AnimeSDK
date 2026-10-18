#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD64A030)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL___C__DISPLAYCLASS22_0___BINDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xD64A0A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftNodeListControl___c__DisplayClass22_0_TypeDefinitionIndex = 79823;

	class MechCraftNodeListControl___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftNodeListControl* __4__this; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* params; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Action* __BindItems_b__0(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNODELISTCONTROL___C__DISPLAYCLASS22_0___BINDITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
