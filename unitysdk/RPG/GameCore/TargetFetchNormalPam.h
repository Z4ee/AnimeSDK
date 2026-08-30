#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_000CEBD13932B58F_OFFSET UNITYSDK_OFFSET(0x1E1B5660)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_38BEBC92726299AA_OFFSET UNITYSDK_OFFSET(0x1E1B5560)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_9DD4F0CBD20A908B_OFFSET UNITYSDK_OFFSET(0x1E1B5600)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_F743A7D6C5483553_OFFSET UNITYSDK_OFFSET(0x1E1B56A0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B55F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNormalPam_TypeDefinitionIndex = 23604;

	class TargetFetchNormalPam : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_38BEBC92726299AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_38BEBC92726299AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DD4F0CBD20A908B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_9DD4F0CBD20A908B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_000CEBD13932B58F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_000CEBD13932B58F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F743A7D6C5483553(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_F743A7D6C5483553_OFFSET))(a1, a2);
		}
	};
}
