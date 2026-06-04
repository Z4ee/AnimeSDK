#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLANDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A1DB60)
#define RPG_GAMECORE_PLANETFESLANDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1DF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandRow_TypeDefinitionIndex = 11617;

	class PlanetFesLandRow : public ::System::Object
	{
	public:
		::System::String* Pic; // 0x10
		::System::String* CargoIcon; // 0x18
		::RPG::GameCore::PlanetFesBigInt* PriceNum; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GrantItemList; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::System::UInt32 ID; // 0x38
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x3C
		::RPG::GameCore::PlanetFesLandType LandType; // 0x40
		::RPG::Client::TextID Description; // 0x48
		::RPG::Client::TextID Name; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesLandRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesLandRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
