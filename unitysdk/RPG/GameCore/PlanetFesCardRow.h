#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C04C50)
#define RPG_GAMECORE_PLANETFESCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C04F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesCardRow_TypeDefinitionIndex = 11542;

	class PlanetFesCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PieceItemList; // 0x10
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x18
		::System::String* PicPath; // 0x20
		::RPG::Client::TextID Description; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 Rarity; // 0x48
		::System::UInt32 CardID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesCardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
