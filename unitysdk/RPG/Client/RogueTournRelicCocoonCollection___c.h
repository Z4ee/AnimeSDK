#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA76D20)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA76D50)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C___GENERATECOCOONDATADICT_B__17_1_OFFSET UNITYSDK_OFFSET(0x1AA76D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection___c_TypeDefinitionIndex = 64760;

	class RogueTournRelicCocoonCollection___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournRelicCocoonCollection___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournRelicCocoonCollection___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournRelicCocoonCollection___c_TypeDefinitionIndex)->GetStaticField(0x2D160);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournRelicCocoonData*>** StaticGet___9__17_1()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournRelicCocoonData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournRelicCocoonCollection___c_TypeDefinitionIndex)->GetStaticField(0x2D168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __GenerateCocoonDataDict_b__17_1(::RPG::Client::RogueTournRelicCocoonData* a1, ::RPG::Client::RogueTournRelicCocoonData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C___GENERATECOCOONDATADICT_B__17_1_OFFSET))(this, a1, a2);
		}
	};
}
