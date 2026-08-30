#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C862C10)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_METHOD_5_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1C862C50)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C862CB0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowTierceControl_TypeDefinitionIndex = 80093;

	class ChallengeTargetInfoRowTierceControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _NodeHint; // 0x18
		::System::Boolean OMPIDCOBEEF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_5_F07808AF19FA033A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWTIERCECONTROL_METHOD_5_F07808AF19FA033A_OFFSET))(this, a1);
		}
	};
}
