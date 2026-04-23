#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERMIXTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1888B590)
#define RPG_GAMECORE_DRINKMAKERMIXTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1888BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerMixTagRow_TypeDefinitionIndex = 12438;

	class DrinkMakerMixTagRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::UInt32 TagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerMixTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerMixTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
