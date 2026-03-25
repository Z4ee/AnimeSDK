#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17288EB0)
#define RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17289090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitMazebuffPlusConfigRow_TypeDefinitionIndex = 12509;

	class GridFightTraitMazebuffPlusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* BEParamList; // 0x18
		::System::UInt32 StanceDamageDisplay; // 0x20
		::System::UInt32 MazebuffID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITMAZEBUFFPLUSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
