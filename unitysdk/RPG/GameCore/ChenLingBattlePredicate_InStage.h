#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_METHOD_3_6BA8927567762926_OFFSET UNITYSDK_OFFSET(0x1C37CF10)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_METHOD_3_AE478FE5C856D6AA_OFFSET UNITYSDK_OFFSET(0x1C37CFE0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_InStage_TypeDefinitionIndex = 15206;

	class ChenLingBattlePredicate_InStage : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::System::UInt32 StageID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BA8927567762926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_InStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_InStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_METHOD_3_6BA8927567762926_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE478FE5C856D6AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_InStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_InStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_METHOD_3_AE478FE5C856D6AA_OFFSET))(a1, a2);
		}
	};
}
