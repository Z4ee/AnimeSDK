#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CycleScore; }
namespace RPG::Client { class CycleScoreService; }

#define RPG_CLIENT_CYCLESCORESYSTEM_GETCURRENTCYCLESCORE_OFFSET UNITYSDK_OFFSET(0xA0F1560)
#define RPG_CLIENT_CYCLESCORESYSTEM_GETSCORESERVICE_OFFSET UNITYSDK_OFFSET(0xA0F27E0)
#define RPG_CLIENT_CYCLESCORESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F2860)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScoreSystem_TypeDefinitionIndex = 58543;

	class CycleScoreSystem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESYSTEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CycleScoreService* GetScoreService()
		{
			return ((::RPG::Client::CycleScoreService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESYSTEM_GETSCORESERVICE_OFFSET))();
		}

		static ::RPG::Client::CycleScore* GetCurrentCycleScore()
		{
			return ((::RPG::Client::CycleScore*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCORESYSTEM_GETCURRENTCYCLESCORE_OFFSET))();
		}
	};
}
