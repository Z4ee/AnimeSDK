#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11584780)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115847C0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__SETPRESELECTCARDID_B__6_1_OFFSET UNITYSDK_OFFSET(0x115847D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCardData___c_TypeDefinitionIndex = 53790;

	class EvolveBuildSelectCardData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::EvolveBuildCard*>** StaticGet___9__6_1()
		{
			return (::System::Predicate_1<::RPG::Client::EvolveBuildCard*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildSelectCardData___c_TypeDefinitionIndex)->GetStaticField(0x67630);
		}
		static ::RPG::GameCore::EvolveBuildSelectCardData___c** StaticGet___9()
		{
			return (::RPG::GameCore::EvolveBuildSelectCardData___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildSelectCardData___c_TypeDefinitionIndex)->GetStaticField(0x67638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPreSelectCardID_b__6_1(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__SETPRESELECTCARDID_B__6_1_OFFSET))(this, a1);
		}
	};
}
