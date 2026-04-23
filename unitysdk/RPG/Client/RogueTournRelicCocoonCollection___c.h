#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1049B0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1049E0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C___GENERATECOCOONDATADICT_B__17_1_OFFSET UNITYSDK_OFFSET(0xB1049F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection___c_TypeDefinitionIndex = 62460;

	class RogueTournRelicCocoonCollection___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueTournRelicCocoonData*>** StaticGet___9__17_1()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournRelicCocoonData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournRelicCocoonCollection___c_TypeDefinitionIndex)->GetStaticField(0x1C220);
		}
		static ::RPG::Client::RogueTournRelicCocoonCollection___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournRelicCocoonCollection___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournRelicCocoonCollection___c_TypeDefinitionIndex)->GetStaticField(0x1C228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __GenerateCocoonDataDict_b__17_1(::RPG::Client::RogueTournRelicCocoonData* a, ::RPG::Client::RogueTournRelicCocoonData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C___GENERATECOCOONDATADICT_B__17_1_OFFSET))(this, a, b);
		}
	};
}
