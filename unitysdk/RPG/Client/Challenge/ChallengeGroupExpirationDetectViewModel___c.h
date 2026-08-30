#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C860BA0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C860BE0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C___DETECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C860BF0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeGroupExpirationDetectViewModel___c_TypeDefinitionIndex = 80096;

	class ChallengeGroupExpirationDetectViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExpirationDetectViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1AF20);
		}
		static ::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::ChallengeGroupExpirationDetectViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExpirationDetectViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1AF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __Detect_b__9_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C___DETECT_B__9_0_OFFSET))(this, a1);
		}
	};
}
