#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"

namespace System { class Object; }

#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB909DE0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET UNITYSDK_OFFSET(0xB909D10)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xB909E80)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB909E30)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB909D90)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB909CD0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xB90A0F0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB90A090)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB90A030)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyChallengeTargetData_TypeDefinitionIndex = 59056;

	class EmptyChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::UInt32 ChallengeParam3; // 0x28
		::System::UInt32 ChallengeParam2; // 0x2C
		::System::UInt32 RewardID; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::RPG::GameCore::ChallengeType ChallengeType; // 0x48
		::System::UInt32 ChallengeParam1; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EmptyChallengeTargetData* FakeData()
		{
			return ((::RPG::Client::EmptyChallengeTargetData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET))();
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
