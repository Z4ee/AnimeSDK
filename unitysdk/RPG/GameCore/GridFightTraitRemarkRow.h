#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveEffect.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DDCF0)
#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DE140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkRow_TypeDefinitionIndex = 12961;

	class GridFightTraitRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* TraitRemarkParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ConditionParamList; // 0x18
		::RPG::Client::TextID TraitRemark; // 0x20
		::RPG::GameCore::GridFightTraitRemarkPosition Position; // 0x30
		::System::Boolean IsInBook; // 0x34
		::System::UInt32 ID; // 0x38
		::System::UInt32 TextOrder; // 0x3C
		::RPG::Client::TextID TraitSimpleRemark; // 0x40
		::RPG::GameCore::GridFightTraitRemarkActiveType ConditionType; // 0x50
		::RPG::GameCore::GridFightTraitRemarkActiveEffect Format; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitRemarkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitRemarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
