#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_4D25964ACACE3775_OFFSET UNITYSDK_OFFSET(0x18C72600)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_B56A0DD98AE22F26_OFFSET UNITYSDK_OFFSET(0x18C72580)
#define RPG_GAMECORE_PROPPUZZLEEVENTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C725D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleEventSender_TypeDefinitionIndex = 20425;

	class PropPuzzleEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleEvent PuzzleEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B56A0DD98AE22F26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventSender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventSender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_B56A0DD98AE22F26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D25964ACACE3775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTSENDER_METHOD_3_4D25964ACACE3775_OFFSET))(a1, a2);
		}
	};
}
