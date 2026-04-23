#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D78FF0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9D790F0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D79060)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D78F30)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D79180)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D78EF0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D79240)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D792B0)
#define RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9D791D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDeadCountChallengeTargetData_TypeDefinitionIndex = 58129;

	class AvatarDeadCountChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		static ::RPG::Client::TextID* StaticGet__NoneDeadTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(AvatarDeadCountChallengeTargetData_TypeDefinitionIndex)->GetStaticField(0xC8C0);
		}

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA__CCTOR_OFFSET))();
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEADCOUNTCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}
	};
}
