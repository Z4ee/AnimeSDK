#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196FD7E0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196FDF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTagConfigRow_TypeDefinitionIndex = 10974;

	class EvolveBuildTagConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::EvolveBuildSeason Season; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 ShopSkillID; // 0x20
		::System::UInt32 ExtraEffectID; // 0x24
		::RPG::Client::TextID Name; // 0x28

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
