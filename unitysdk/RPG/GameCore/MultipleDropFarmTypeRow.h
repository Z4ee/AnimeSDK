#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2DCC00)
#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DD240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultipleDropFarmTypeRow_TypeDefinitionIndex = 11462;

	class MultipleDropFarmTypeRow : public ::System::Object
	{
	public:
		::System::String* SignIconPath; // 0x10
		::RPG::GameCore::MultipleDropTypeConfig MultipleDropType; // 0x18
		::System::UInt32 UnlockID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MultipleDropFarmTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultipleDropFarmTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
