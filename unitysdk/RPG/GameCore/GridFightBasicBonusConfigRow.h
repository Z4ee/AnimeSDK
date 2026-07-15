#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightBonusType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C4170)
#define RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C4380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBasicBonusConfigRow_TypeDefinitionIndex = 12922;

	class GridFightBasicBonusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BonusTypeParamList; // 0x10
		::System::UInt32 BonusID; // 0x18
		::RPG::GameCore::GridFightBonusType BonusType; // 0x1C
		::System::UInt32 Value; // 0x20
		::System::UInt32 BonusTypeParam; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBasicBonusConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBasicBonusConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBASICBONUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
