#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD64D960)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD64D9A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C___REFRESH_B__14_2_OFFSET UNITYSDK_OFFSET(0xD64D9B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderItemControl___c_TypeDefinitionIndex = 80014;

	class MechCraftOrderItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftOrderItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftOrderItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftOrderItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5A970);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__14_2()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftOrderItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5A978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* __Refresh_b__14_2(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROL___C___REFRESH_B__14_2_OFFSET))(this, a1, a2);
		}
	};
}
