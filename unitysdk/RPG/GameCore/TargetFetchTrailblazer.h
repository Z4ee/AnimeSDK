#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET UNITYSDK_OFFSET(0x19CFCCE0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_86BE90C8996584F8_OFFSET UNITYSDK_OFFSET(0x19D0F580)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_9ACC00D5CBCD4AF8_OFFSET UNITYSDK_OFFSET(0x19D077F0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_CF2EB1595F9C95D2_OFFSET UNITYSDK_OFFSET(0x19D0F4C0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFCC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTrailblazer_TypeDefinitionIndex = 22650;

	class TargetFetchTrailblazer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF2EB1595F9C95D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_CF2EB1595F9C95D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77DAD0F287096B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9ACC00D5CBCD4AF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_9ACC00D5CBCD4AF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86BE90C8996584F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_86BE90C8996584F8_OFFSET))(a1, a2);
		}
	};
}
