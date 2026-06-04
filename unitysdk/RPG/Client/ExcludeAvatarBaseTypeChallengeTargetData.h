#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95C680)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xB95C9E0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95C950)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95C4E0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET UNITYSDK_OFFSET(0xB95C730)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB95C4A0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB95CB30)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95CBB0)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xB95CC70)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95CC10)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB95CB50)

namespace RPG::Client
{
	inline static constexpr unsigned int ExcludeAvatarBaseTypeChallengeTargetData_TypeDefinitionIndex = 59057;

	class ExcludeAvatarBaseTypeChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x28

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		static ::System::Boolean _CheckExcludeBasicType(::RPG::GameCore::AvatarBaseType a1, ::Il2CppArray<::RPG::Client::TeamData*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseType, ::Il2CppArray<::RPG::Client::TeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__CHECKEXCLUDEBASICTYPE_OFFSET))(a1, a2);
		}

		::System::Boolean _UpdateChallengeTargetState_b__1_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA__UPDATECHALLENGETARGETSTATE_B__1_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
