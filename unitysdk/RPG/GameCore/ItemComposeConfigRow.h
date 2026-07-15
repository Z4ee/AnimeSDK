#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormulaType.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"
#include "unitysdk/RPG/GameCore/ItemComposeLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_ITEMCOMPOSECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0197A0)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01A2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeConfigRow_TypeDefinitionIndex = 13340;

	class ItemComposeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitTypeParam; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialCost; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialMaterialCost; // 0x20
		::Il2CppArray<::System::UInt32>* RelicList; // 0x28
		::Il2CppArray<::System::UInt32>* ItemComposeTag; // 0x30
		::RPG::GameCore::ItemComposeFuncType FuncType; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Boolean IsShowHoldNumber; // 0x40
		::System::Boolean IsCanAcceleratedCompose; // 0x41
		::System::UInt32 SpecialMaterialCostNumber; // 0x44
		::System::UInt32 FormulaRequire; // 0x48
		::System::UInt32 ItemID; // 0x4C
		::RPG::GameCore::FormulaType FormulaType; // 0x50
		::System::UInt32 LimitValue; // 0x54
		::RPG::GameCore::ItemComposeLimitType LimitType; // 0x58
		::System::UInt32 MaxCount; // 0x5C
		::System::UInt32 WorldLevelRequire; // 0x60
		::System::UInt32 Type; // 0x64
		::System::UInt32 CoinCost; // 0x68
		::System::UInt32 Order; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemComposeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemComposeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
