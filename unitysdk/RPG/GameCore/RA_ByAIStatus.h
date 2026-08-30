#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_0949C72413977E51_OFFSET UNITYSDK_OFFSET(0x1D18FDA0)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_2A56728F9DB03AEA_OFFSET UNITYSDK_OFFSET(0x1D18FB60)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_4EBBBF23158BB193_OFFSET UNITYSDK_OFFSET(0x1D18FBA0)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_E4AF2172CC7C06AF_OFFSET UNITYSDK_OFFSET(0x1D18FD70)
#define RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAIStatus_TypeDefinitionIndex = 19816;

	class RA_ByAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AIStatus>* Status; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2A56728F9DB03AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_2A56728F9DB03AEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4EBBBF23158BB193(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_4EBBBF23158BB193_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4AF2172CC7C06AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_E4AF2172CC7C06AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0949C72413977E51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_0949C72413977E51_OFFSET))(a1, a2);
		}
	};
}
