#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB145E0)
#define RPG_GAMECORE_DRINKMAKERLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB146F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerLayerRow_TypeDefinitionIndex = 13062;

	class DrinkMakerLayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::UInt32 LayerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerLayerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerLayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
