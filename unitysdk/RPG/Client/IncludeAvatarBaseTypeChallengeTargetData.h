#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA631C70)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA632030)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA631FA0)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA631A90)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKINCLUDEBASICTYPE_OFFSET UNITYSDK_OFFSET(0xA631D30)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA631A50)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xA632240)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA6322D0)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA6323B0)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA632340)
#define RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA632260)

namespace RPG::Client
{
	inline static constexpr unsigned int IncludeAvatarBaseTypeChallengeTargetData_TypeDefinitionIndex = 58136;

	class IncludeAvatarBaseTypeChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x30

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		static ::System::Boolean _CheckIncludeBasicType(::RPG::GameCore::AvatarBaseType avatarBaseType, ::System::Int32 targetCount, ::Il2CppArray<::RPG::Client::TeamData*>* teams)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseType, ::System::Int32, ::Il2CppArray<::RPG::Client::TeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKINCLUDEBASICTYPE_OFFSET))(avatarBaseType, targetCount, teams);
		}

		::System::Boolean _UpdateChallengeTargetState_b__1_0(::RPG::Client::IAvatarInfoProvider* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET))(this, x);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
