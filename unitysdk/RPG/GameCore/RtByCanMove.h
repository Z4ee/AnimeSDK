#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_1E94D5CB286341D4_OFFSET UNITYSDK_OFFSET(0x18DC7E90)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET UNITYSDK_OFFSET(0x18DC7F60)
#define RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC7F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCanMove_TypeDefinitionIndex = 23115;

	class RtByCanMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E94D5CB286341D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_1E94D5CB286341D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD974240ACE3F31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET))(a1, a2);
		}
	};
}
