#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MissionUtils___c__DisplayClass10_0; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD71A150)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xD71E5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass10_1_TypeDefinitionIndex = 66234;

	class MissionUtils___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::RPG::Client::MissionUtils___c__DisplayClass10_0* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 targetPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryAssistWayPointOneClickCompleteTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__0_OFFSET))(this);
		}
	};
}
