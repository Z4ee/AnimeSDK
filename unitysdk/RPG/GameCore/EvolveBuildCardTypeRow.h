#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F7BB0)
#define RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196F7DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildCardTypeRow_TypeDefinitionIndex = 10995;

	class EvolveBuildCardTypeRow : public ::System::Object
	{
	public:
		::System::String* CardBuffItemBgBig; // 0x10
		::System::String* CardBuffItemBgMid; // 0x18
		::System::String* CardBuffItemBgSmall; // 0x20
		::RPG::GameCore::EvolveBuildCardType Type; // 0x28
		::RPG::GameCore::EvolveBuildSeason Season; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildCardTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildCardTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
