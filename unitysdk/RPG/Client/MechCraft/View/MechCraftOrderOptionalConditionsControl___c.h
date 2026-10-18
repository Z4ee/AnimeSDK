#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6478F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD647930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C___BIND_B__6_1_OFFSET UNITYSDK_OFFSET(0xD647940)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderOptionalConditionsControl___c_TypeDefinitionIndex = 79993;

	class MechCraftOrderOptionalConditionsControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftOrderOptionalConditionsControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftOrderOptionalConditionsControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftOrderOptionalConditionsControl___c_TypeDefinitionIndex)->GetStaticField(0x4B1B0);
		}
		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__6_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(MechCraftOrderOptionalConditionsControl___c_TypeDefinitionIndex)->GetStaticField(0x4B1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* __Bind_b__6_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROL___C___BIND_B__6_1_OFFSET))(this, a1, a2);
		}
	};
}
