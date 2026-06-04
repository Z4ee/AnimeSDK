#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICRECOMMENDPROPERTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC3220)
#define RPG_GAMECORE_RELICRECOMMENDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC3340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicRecommendProperty_TypeDefinitionIndex = 12149;

	class RelicRecommendProperty : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicType RelicType; // 0x10
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICRECOMMENDPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicRecommendProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicRecommendProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICRECOMMENDPROPERTY_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
