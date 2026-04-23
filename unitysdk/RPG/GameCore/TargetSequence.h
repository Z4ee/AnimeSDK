#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetSeqOperation; }

#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_1B6AB92A0F4AEE12_OFFSET UNITYSDK_OFFSET(0x18EF8E30)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_21B947C3EC1B2476_OFFSET UNITYSDK_OFFSET(0x18EF68A0)
#define RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF6850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSequence_TypeDefinitionIndex = 22888;

	class TargetSequence : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* Sequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B6AB92A0F4AEE12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_1B6AB92A0F4AEE12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21B947C3EC1B2476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_21B947C3EC1B2476_OFFSET))(a1, a2);
		}
	};
}
