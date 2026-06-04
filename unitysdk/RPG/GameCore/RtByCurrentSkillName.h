#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_2CE07666CFDDA529_OFFSET UNITYSDK_OFFSET(0x19BE02D0)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_4DBF9F00897CF1AA_OFFSET UNITYSDK_OFFSET(0x19BE0230)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_5287FAA60DF53FC4_OFFSET UNITYSDK_OFFSET(0x19BE0070)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_9E51D711EA776EEB_OFFSET UNITYSDK_OFFSET(0x19BDFF50)
#define RPG_GAMECORE_RTBYCURRENTSKILLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDFFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCurrentSkillName_TypeDefinitionIndex = 22912;

	class RtByCurrentSkillName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SkillName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9E51D711EA776EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_9E51D711EA776EEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5287FAA60DF53FC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_5287FAA60DF53FC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4DBF9F00897CF1AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_4DBF9F00897CF1AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2CE07666CFDDA529(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCURRENTSKILLNAME_METHOD_4_2CE07666CFDDA529_OFFSET))(a1, a2);
		}
	};
}
