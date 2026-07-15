#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC63D20)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC63D60)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowControl___c_TypeDefinitionIndex = 76460;

	class ChallengeTargetInfoRowControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::ChallengeTargetInfoRowControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::ChallengeTargetInfoRowControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTargetInfoRowControl___c_TypeDefinitionIndex)->GetStaticField(0x606D0);
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
