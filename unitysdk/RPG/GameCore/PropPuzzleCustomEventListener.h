#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_859F282A27A3BB54_OFFSET UNITYSDK_OFFSET(0x19A93F80)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_C1C28E353C10839D_OFFSET UNITYSDK_OFFSET(0x19A94000)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A93FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleCustomEventListener_TypeDefinitionIndex = 20764;

	class PropPuzzleCustomEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleCustomEvent Event; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20
		::System::Boolean IsLoop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_859F282A27A3BB54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_859F282A27A3BB54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1C28E353C10839D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_C1C28E353C10839D_OFFSET))(a1, a2);
		}
	};
}
