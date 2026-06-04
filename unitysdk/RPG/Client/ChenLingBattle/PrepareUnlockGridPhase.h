#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_166;
namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5C3B30)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5C3D30)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET UNITYSDK_OFFSET(0xB5C3DB0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C3B20)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xB5C3FD0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareUnlockGridPhase_TypeDefinitionIndex = 70882;

	class PrepareUnlockGridPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestUnlockGrid(::RPG::Client::ChenLingBattle::GridIndex* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingUnlockGridScRsp(::Class_1_D17272E82AE804C2_166* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_166*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET))(this, a1);
		}
	};
}
