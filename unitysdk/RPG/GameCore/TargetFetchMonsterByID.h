#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET UNITYSDK_OFFSET(0x177B6970)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_A160624307D82978_OFFSET UNITYSDK_OFFSET(0x177BF580)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x177B6920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMonsterByID_TypeDefinitionIndex = 22239;

	class TargetFetchMonsterByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MonsterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A160624307D82978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_A160624307D82978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5770113543797A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_METHOD_4_5770113543797A6B_OFFSET))(a1, a2);
		}
	};
}
