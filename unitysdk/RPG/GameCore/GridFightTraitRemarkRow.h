#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveEffect.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172894A0)
#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172898F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkRow_TypeDefinitionIndex = 12528;

	class GridFightTraitRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConditionParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* TraitRemarkParamList; // 0x18
		::RPG::GameCore::GridFightTraitRemarkActiveEffect Format; // 0x20
		::System::Boolean IsInBook; // 0x24
		::RPG::Client::TextID TraitSimpleRemark; // 0x28
		::RPG::Client::TextID TraitRemark; // 0x38
		::System::UInt32 TextOrder; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::GameCore::GridFightTraitRemarkActiveType ConditionType; // 0x50
		::RPG::GameCore::GridFightTraitRemarkPosition Position; // 0x54

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
