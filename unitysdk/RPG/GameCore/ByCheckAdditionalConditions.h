#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_6D0F58F4E66AD778_OFFSET UNITYSDK_OFFSET(0x16FFCB40)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_A779EEA055BC2D16_OFFSET UNITYSDK_OFFSET(0x16FFCA70)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFCAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdditionalConditions_TypeDefinitionIndex = 21665;

	class ByCheckAdditionalConditions : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckForWin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A779EEA055BC2D16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_A779EEA055BC2D16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D0F58F4E66AD778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_6D0F58F4E66AD778_OFFSET))(a1, a2);
		}
	};
}
