#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17459F70)
#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1745A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultipleDropFarmTypeRow_TypeDefinitionIndex = 10722;

	class MultipleDropFarmTypeRow : public ::System::Object
	{
	public:
		::System::String* SignIconPath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::RPG::GameCore::MultipleDropTypeConfig MultipleDropType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MultipleDropFarmTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultipleDropFarmTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
