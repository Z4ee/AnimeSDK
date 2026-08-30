#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_METHOD_3_61AEB9DFCACA200F_OFFSET UNITYSDK_OFFSET(0x1D17FE30)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_METHOD_3_C706522968AD039C_OFFSET UNITYSDK_OFFSET(0x1D17FE70)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17FE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleCustomEventSender_TypeDefinitionIndex = 21738;

	class PropPuzzleCustomEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleCustomEvent Event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61AEB9DFCACA200F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventSender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventSender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_METHOD_3_61AEB9DFCACA200F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C706522968AD039C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventSender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTSENDER_METHOD_3_C706522968AD039C_OFFSET))(a1, a2);
		}
	};
}
