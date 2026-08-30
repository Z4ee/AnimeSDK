#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleViewEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_46766588ADC6AB65_OFFSET UNITYSDK_OFFSET(0x1D36CBA0)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_E00F1A40B5C8D8CE_OFFSET UNITYSDK_OFFSET(0x1D36CBF0)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36CBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleViewEventSender_TypeDefinitionIndex = 21740;

	class PropPuzzleViewEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleViewEvent ViewEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_46766588ADC6AB65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleViewEventSender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleViewEventSender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_46766588ADC6AB65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E00F1A40B5C8D8CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_E00F1A40B5C8D8CE_OFFSET))(a1, a2);
		}
	};
}
