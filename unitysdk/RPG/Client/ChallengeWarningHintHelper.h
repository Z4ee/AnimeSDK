#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER_TRYGETWARNINGHINT_OFFSET UNITYSDK_OFFSET(0xCAC0360)
#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAC0900)
#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__GETTYPENAMETEXTID_OFFSET UNITYSDK_OFFSET(0xCAC07E0)
#define RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__TRYGET5WEEKDURATION_OFFSET UNITYSDK_OFFSET(0xCAC0430)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeWarningHintHelper_TypeDefinitionIndex = 63187;

	class ChallengeWarningHintHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__MemoryNameTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeWarningHintHelper_TypeDefinitionIndex)->GetStaticField(0xBAA0);
		}
		static ::RPG::Client::TextID* StaticGet__BossNameTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeWarningHintHelper_TypeDefinitionIndex)->GetStaticField(0xBAB0);
		}
		static ::RPG::Client::TextID* StaticGet__StoryNameTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeWarningHintHelper_TypeDefinitionIndex)->GetStaticField(0xBAC0);
		}
		static ::RPG::Client::TextID* StaticGet__Warning5WeekTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ChallengeWarningHintHelper_TypeDefinitionIndex)->GetStaticField(0xBAD0);
		}
		// static const ::System::String* _Special5WeekConstKey; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryGetWarningHint(::RPG::Client::ChallengeGroupData* a1, ::RPG::Client::TextID& a2, ::Il2CppArray<::System::Object*>*& a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChallengeGroupData*, ::RPG::Client::TextID&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER_TRYGETWARNINGHINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _TryGet5WeekDuration(::RPG::Client::ChallengeGroupData* a1, ::RPG::Client::TextID& a2, ::Il2CppArray<::System::Object*>*& a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChallengeGroupData*, ::RPG::Client::TextID&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__TRYGET5WEEKDURATION_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TextID _GetTypeNameTextID(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEWARNINGHINTHELPER__GETTYPENAMETEXTID_OFFSET))(a1);
		}
	};
}
