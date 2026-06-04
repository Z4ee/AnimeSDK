#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194EC2B0)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194EC980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubNatureConfigRow_TypeDefinitionIndex = 12295;

	class BoxingClubNatureConfigRow : public ::System::Object
	{
	public:
		::System::String* BoxingBuffIconBackground; // 0x10
		::System::String* BoxingBuffBackground; // 0x18
		::System::String* NatureIconBackGround; // 0x20
		::System::String* BoxingBuffIcon; // 0x28
		::RPG::GameCore::AttackDamageType BoxingClubNatureType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoxingClubNatureConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubNatureConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
