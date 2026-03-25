#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_41D6BFFF9F1BCF78_OFFSET UNITYSDK_OFFSET(0x175789D0)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_6186FE26BBA8DD30_OFFSET UNITYSDK_OFFSET(0x17578900)
#define RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x17578980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAIStatus_TypeDefinitionIndex = 18324;

	class RA_ByAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AIStatus>* Status; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6186FE26BBA8DD30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_6186FE26BBA8DD30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41D6BFFF9F1BCF78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_41D6BFFF9F1BCF78_OFFSET))(a1, a2);
		}
	};
}
