#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_METHOD_3_148C2F4861C9154A_OFFSET UNITYSDK_OFFSET(0x18651EC0)
#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_METHOD_3_362DE3F93F7E73DD_OFFSET UNITYSDK_OFFSET(0x18651F40)
#define RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x18651F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayCounterRecover_TypeDefinitionIndex = 20520;

	class AdvGameplayCounterRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CounterID; // 0x18
		::System::UInt32 RecoverCounter; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_148C2F4861C9154A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayCounterRecover*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayCounterRecover*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_METHOD_3_148C2F4861C9154A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_362DE3F93F7E73DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayCounterRecover* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayCounterRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYCOUNTERRECOVER_METHOD_3_362DE3F93F7E73DD_OFFSET))(a1, a2);
		}
	};
}
