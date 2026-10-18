#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6326A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6326E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C___REFRESHTRAITS_B__12_1_OFFSET UNITYSDK_OFFSET(0xD6326F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressControl___c_TypeDefinitionIndex = 79929;

	class MechCraftCraftProgressControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftCraftProgressControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftCraftProgressControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftProgressControl___c_TypeDefinitionIndex)->GetStaticField(0x59710);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__12_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftProgressControl___c_TypeDefinitionIndex)->GetStaticField(0x59718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* __RefreshTraits_b__12_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSCONTROL___C___REFRESHTRAITS_B__12_1_OFFSET))(this, a1, a2);
		}
	};
}
