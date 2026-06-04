#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7DE720)
#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DE760)
#define RPG_CLIENT_DICECOMBATACTIVITYDATA___C___GOTOENTRANCEPAGE_B__8_1_OFFSET UNITYSDK_OFFSET(0xB7DE770)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatActivityData___c_TypeDefinitionIndex = 57610;

	class DiceCombatActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombatActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombatActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatActivityData___c_TypeDefinitionIndex)->GetStaticField(0x6900);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatActivityData___c_TypeDefinitionIndex)->GetStaticField(0x6908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATACTIVITYDATA___C___GOTOENTRANCEPAGE_B__8_1_OFFSET))(this);
		}
	};
}
