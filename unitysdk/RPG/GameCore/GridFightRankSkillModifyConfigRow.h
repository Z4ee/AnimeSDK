#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D161000)
#define RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D161230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRankSkillModifyConfigRow_TypeDefinitionIndex = 13409;

	class GridFightRankSkillModifyConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ModifySkillIndexs; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ModifyValues; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* ModifyOps; // 0x20
		::System::UInt32 RankID; // 0x28
		::System::UInt32 SkillID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
