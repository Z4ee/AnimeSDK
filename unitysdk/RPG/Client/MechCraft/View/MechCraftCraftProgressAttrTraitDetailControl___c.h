#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD62FC20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD62FC60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C___REFRESHATTRIBUTETYPES_B__14_1_OFFSET UNITYSDK_OFFSET(0xD62FC70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C___REFRESHTRAITS_B__15_1_OFFSET UNITYSDK_OFFSET(0xD62FDB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTraitDetailControl___c_TypeDefinitionIndex = 79923;

	class MechCraftCraftProgressAttrTraitDetailControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTraitDetailControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftCraftProgressAttrTraitDetailControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftProgressAttrTraitDetailControl___c_TypeDefinitionIndex)->GetStaticField(0x59460);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__15_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftProgressAttrTraitDetailControl___c_TypeDefinitionIndex)->GetStaticField(0x59468);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__14_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftProgressAttrTraitDetailControl___c_TypeDefinitionIndex)->GetStaticField(0x59470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* __RefreshAttributeTypes_b__14_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C___REFRESHATTRIBUTETYPES_B__14_1_OFFSET))(this, a1, a2);
		}

		::System::Action* __RefreshTraits_b__15_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILCONTROL___C___REFRESHTRAITS_B__15_1_OFFSET))(this, a1, a2);
		}
	};
}
