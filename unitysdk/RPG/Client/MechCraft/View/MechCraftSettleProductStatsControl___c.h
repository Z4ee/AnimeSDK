#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD664B80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD664BC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C___REFRESHATTRIBUTES_B__7_1_OFFSET UNITYSDK_OFFSET(0xD664BD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C___REFRESHTRAITS_B__8_1_OFFSET UNITYSDK_OFFSET(0xD664DB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductStatsControl___c_TypeDefinitionIndex = 80041;

	class MechCraftSettleProductStatsControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__7_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftSettleProductStatsControl___c_TypeDefinitionIndex)->GetStaticField(0x55F00);
		}
		static ::RPG::Client::MechCraft::View::MechCraftSettleProductStatsControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftSettleProductStatsControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftSettleProductStatsControl___c_TypeDefinitionIndex)->GetStaticField(0x55F08);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__8_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftSettleProductStatsControl___c_TypeDefinitionIndex)->GetStaticField(0x55F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* __RefreshAttributes_b__7_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C___REFRESHATTRIBUTES_B__7_1_OFFSET))(this, a1, a2);
		}

		::System::Action* __RefreshTraits_b__8_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSTATSCONTROL___C___REFRESHTRAITS_B__8_1_OFFSET))(this, a1, a2);
		}
	};
}
