#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_0FDCAA5A05763F40_OFFSET UNITYSDK_OFFSET(0x1E1BF940)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_4D9861C07039E52F_OFFSET UNITYSDK_OFFSET(0x1E1BFA60)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_A26600FC872DE6B3_OFFSET UNITYSDK_OFFSET(0x1E1BF980)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_D4C747641F885762_OFFSET UNITYSDK_OFFSET(0x1E1BFA30)
#define RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSequence_TypeDefinitionIndex = 23623;

	class TargetSequence : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* Sequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0FDCAA5A05763F40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_0FDCAA5A05763F40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A26600FC872DE6B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_A26600FC872DE6B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4C747641F885762(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_D4C747641F885762_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D9861C07039E52F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_4D9861C07039E52F_OFFSET))(a1, a2);
		}
	};
}
