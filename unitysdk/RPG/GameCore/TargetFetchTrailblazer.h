#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET UNITYSDK_OFFSET(0x1D0BDAA0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_86BE90C8996584F8_OFFSET UNITYSDK_OFFSET(0x1D0BDB20)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_D9A554FD57FAB005_OFFSET UNITYSDK_OFFSET(0x1D0BDB00)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_E6333461951E72C5_OFFSET UNITYSDK_OFFSET(0x1D0BDA20)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BDA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTrailblazer_TypeDefinitionIndex = 23113;

	class TargetFetchTrailblazer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E6333461951E72C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_E6333461951E72C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77DAD0F287096B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_77DAD0F287096B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9A554FD57FAB005(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_D9A554FD57FAB005_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86BE90C8996584F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_METHOD_4_86BE90C8996584F8_OFFSET))(a1, a2);
		}
	};
}
