#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_38B87B3CE4AA02F6_OFFSET UNITYSDK_OFFSET(0x1BB8B6E0)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_A781A8F6F4E52B53_OFFSET UNITYSDK_OFFSET(0x1BB8B520)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_B2061F6C5A8C7EA0_OFFSET UNITYSDK_OFFSET(0x1BB8B710)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET UNITYSDK_OFFSET(0x1BB8B560)
#define RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCanMove_TypeDefinitionIndex = 23263;

	class RtByCanMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A781A8F6F4E52B53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_A781A8F6F4E52B53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD974240ACE3F31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38B87B3CE4AA02F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_38B87B3CE4AA02F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2061F6C5A8C7EA0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_B2061F6C5A8C7EA0_OFFSET))(a1, a2);
		}
	};
}
