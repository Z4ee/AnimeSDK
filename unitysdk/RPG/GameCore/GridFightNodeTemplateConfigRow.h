#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06C3F0)
#define RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNodeTemplateConfigRow_TypeDefinitionIndex = 13117;

	class GridFightNodeTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 BasicGoldRewardNum; // 0x18
		::System::UInt32 IsAugment; // 0x1C
		::System::UInt32 PenaltyBonusRuleID; // 0x20
		::RPG::GameCore::GridFightNodeType NodeType; // 0x24
		::System::UInt32 NodeTemplateID; // 0x28
		::System::UInt32 StageID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightNodeTemplateConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightNodeTemplateConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
