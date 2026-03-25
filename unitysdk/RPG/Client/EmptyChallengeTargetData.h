#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"

namespace System { class Object; }

#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x95FD600)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET UNITYSDK_OFFSET(0x95FD530)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x95FD6A0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x95FD650)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x95FD5B0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95FD4F0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x95FD990)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x95FD920)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x95FD8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyChallengeTargetData_TypeDefinitionIndex = 51209;

	class EmptyChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::UInt32 RewardID; // 0x30
		::System::UInt32 ChallengeParam3; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ChallengeParam2; // 0x48
		::System::UInt32 ChallengeParam1; // 0x4C
		::RPG::GameCore::ChallengeType ChallengeType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EmptyChallengeTargetData* FakeData()
		{
			return ((::RPG::Client::EmptyChallengeTargetData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET))();
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
