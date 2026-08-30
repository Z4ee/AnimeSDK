#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONMATERIALWHITEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAE63D0)
#define RPG_GAMECORE_STAGEINVASIONMATERIALWHITEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE6490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionMaterialWhiteRow_TypeDefinitionIndex = 14992;

	class StageInvasionMaterialWhiteRow : public ::System::Object
	{
	public:
		::System::UInt32 MonsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALWHITEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionMaterialWhiteRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionMaterialWhiteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALWHITEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
