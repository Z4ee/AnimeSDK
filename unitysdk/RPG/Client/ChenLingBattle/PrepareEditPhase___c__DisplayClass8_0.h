#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA9E50)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS8_0__REQUESTFINISHPREPARE_B__2_OFFSET UNITYSDK_OFFSET(0x9FA9FB0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase___c__DisplayClass8_0_TypeDefinitionIndex = 70069;

	class PrepareEditPhase___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestFinishPrepare_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__DISPLAYCLASS8_0__REQUESTFINISHPREPARE_B__2_OFFSET))(this);
		}
	};
}
