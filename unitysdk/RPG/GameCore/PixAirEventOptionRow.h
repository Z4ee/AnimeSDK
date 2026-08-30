#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirBasicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PIXAIREVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D792A10)
#define RPG_GAMECORE_PIXAIREVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D792CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEventOptionRow_TypeDefinitionIndex = 12070;

	class PixAirEventOptionRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirBasicType, ::System::UInt32>* BasicCost; // 0x10
		::System::UInt32 ContentID; // 0x18
		::System::UInt32 OptionID; // 0x1C
		::RPG::Client::TextID OptionDescribe; // 0x20
		::RPG::Client::TextID OptionEffectDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEventOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
