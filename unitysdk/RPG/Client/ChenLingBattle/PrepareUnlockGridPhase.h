#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
class Class_1_FA4F4A67B1C04320_153;
namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x933C480)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x933C680)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET UNITYSDK_OFFSET(0x933C700)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x933C470)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0x933C8E0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareUnlockGridPhase_TypeDefinitionIndex = 62071;

	class PrepareUnlockGridPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestUnlockGrid(::RPG::Client::ChenLingBattle::GridIndex* gridIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET))(this, gridIndex);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingUnlockGridScRsp(::Class_1_FA4F4A67B1C04320_153* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_153*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET))(this, rsp);
		}
	};
}
