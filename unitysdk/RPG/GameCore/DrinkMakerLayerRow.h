#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1717CB70)
#define RPG_GAMECORE_DRINKMAKERLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1717CC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerLayerRow_TypeDefinitionIndex = 12013;

	class DrinkMakerLayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::UInt32 LayerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerLayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerLayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
