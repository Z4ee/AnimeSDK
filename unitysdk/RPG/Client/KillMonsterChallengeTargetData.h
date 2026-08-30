#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x194F5390)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x194F55F0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET UNITYSDK_OFFSET(0x194F50E0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0x194F5320)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x194F5560)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x194F5150)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x194F5050)

namespace RPG::Client
{
	inline static constexpr unsigned int KillMonsterChallengeTargetData_TypeDefinitionIndex = 63181;

	class KillMonsterChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET))(this);
		}

		::System::UInt32 get_KillNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET))(this);
		}
	};
}
