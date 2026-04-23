#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30BF40)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA30C2F0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30C260)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30BD60)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET UNITYSDK_OFFSET(0xA30BFF0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA30BD20)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xA30C450)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30C4E0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xA30C5C0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30C550)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xA30C470)

namespace RPG::Client
{
	inline static constexpr unsigned int ExcludeAvatarBaseTypeChallengeTargetData_TypeDefinitionIndex = 58134;

	class ExcludeAvatarBaseTypeChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x30

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		static ::System::Boolean _CheckExcludeBasicType(::RPG::GameCore::AvatarBaseType avatarBaseType, ::Il2CppArray<::RPG::Client::TeamData*>* teams)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseType, ::Il2CppArray<::RPG::Client::TeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET))(avatarBaseType, teams);
		}

		::System::Boolean _UpdateChallengeTargetState_b__1_0(::RPG::Client::IAvatarInfoProvider* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET))(this, x);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
