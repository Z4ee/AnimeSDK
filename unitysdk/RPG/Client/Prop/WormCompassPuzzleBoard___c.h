#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC65A590)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC65A5D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C___CONFIRMCLICKINTERNAL_B__78_0_OFFSET UNITYSDK_OFFSET(0xC65A5E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard___c_TypeDefinitionIndex = 73445;

	class WormCompassPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__78_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x247E0);
		}
		static ::RPG::Client::Prop::WormCompassPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::WormCompassPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x247E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void __ConfirmClickInternal_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD___C___CONFIRMCLICKINTERNAL_B__78_0_OFFSET))(this);
		}
	};
}
