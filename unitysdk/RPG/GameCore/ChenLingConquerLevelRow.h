#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGCONQUERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170846D0)
#define RPG_GAMECORE_CHENLINGCONQUERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170847C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingConquerLevelRow_TypeDefinitionIndex = 10384;

	class ChenLingConquerLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 PrivilegePointNum; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONQUERLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingConquerLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingConquerLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONQUERLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
