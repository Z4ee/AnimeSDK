#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9F2BF0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F2C30)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowControl___c_TypeDefinitionIndex = 80093;

	class ChallengeTargetInfoRowControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::ChallengeTargetInfoRowControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::ChallengeTargetInfoRowControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTargetInfoRowControl___c_TypeDefinitionIndex)->GetStaticField(0x1CC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
