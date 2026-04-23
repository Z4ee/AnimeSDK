#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESBONUSMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C03720)
#define RPG_GAMECORE_PLANETFESBONUSMASCOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C03850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBonusMascotRow_TypeDefinitionIndex = 11590;

	class PlanetFesBonusMascotRow : public ::System::Object
	{
	public:
		::System::String* SourcePath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBONUSMASCOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesBonusMascotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBonusMascotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBONUSMASCOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
