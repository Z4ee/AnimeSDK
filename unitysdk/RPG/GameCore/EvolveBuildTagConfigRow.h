#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D07B5D0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07BD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTagConfigRow_TypeDefinitionIndex = 11399;

	class EvolveBuildTagConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ShopSkillID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::EvolveBuildSeason Season; // 0x30
		::System::UInt32 ExtraEffectID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildTagConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
