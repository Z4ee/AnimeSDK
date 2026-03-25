#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BAB30)
#define RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BAC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameBingoSymbolRow_TypeDefinitionIndex = 11176;

	class PlanetFesGameBingoSymbolRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
