#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_4D25964ACACE3775_OFFSET UNITYSDK_OFFSET(0x1D1804D0)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_BA447FC4E7239B5E_OFFSET UNITYSDK_OFFSET(0x1D180490)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1804C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleEventSender_TypeDefinitionIndex = 21338;

	class PropPuzzleEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleEvent PuzzleEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA447FC4E7239B5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventSender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventSender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_BA447FC4E7239B5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D25964ACACE3775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_4D25964ACACE3775_OFFSET))(a1, a2);
		}
	};
}
