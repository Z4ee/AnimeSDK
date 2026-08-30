#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_METHOD_4_9B256728A899E390_OFFSET UNITYSDK_OFFSET(0x1D6A1190)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_METHOD_4_D48C134A69AC4A25_OFFSET UNITYSDK_OFFSET(0x1D6A1140)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDrinkMakerCheersInitFinish_TypeDefinitionIndex = 21473;

	class WaitDrinkMakerCheersInitFinish : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D48C134A69AC4A25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_METHOD_4_D48C134A69AC4A25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B256728A899E390(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_METHOD_4_9B256728A899E390_OFFSET))(a1, a2);
		}
	};
}
