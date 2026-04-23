#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_BAEA604CC91697DF_OFFSET UNITYSDK_OFFSET(0x18C71C90)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_FBEEA529FF07B792_OFFSET UNITYSDK_OFFSET(0x18C71C10)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C71C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleCustomEventListener_TypeDefinitionIndex = 20843;

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

		static ::System::Void Method_3_FBEEA529FF07B792(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_FBEEA529FF07B792_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BAEA604CC91697DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_METHOD_3_BAEA604CC91697DF_OFFSET))(a1, a2);
		}
	};
}
