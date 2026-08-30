#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESGACHAAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79CD50)
#define RPG_GAMECORE_PLANETFESGACHAAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D79CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGachaAvatarRow_TypeDefinitionIndex = 12135;

	class PlanetFesGachaAvatarRow : public ::System::Object
	{
	public:
		::System::UInt32 GachaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHAAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesGachaAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGachaAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHAAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
