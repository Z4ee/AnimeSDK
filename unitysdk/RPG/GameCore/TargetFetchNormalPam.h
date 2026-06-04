#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_10A9C91F322D679A_OFFSET UNITYSDK_OFFSET(0x19D066C0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_9DD4F0CBD20A908B_OFFSET UNITYSDK_OFFSET(0x19CFACD0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_B9DDACC7A11B543D_OFFSET UNITYSDK_OFFSET(0x19D0DC50)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_F743A7D6C5483553_OFFSET UNITYSDK_OFFSET(0x19D0DD30)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFAC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNormalPam_TypeDefinitionIndex = 22561;

	class TargetFetchNormalPam : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9DDACC7A11B543D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_B9DDACC7A11B543D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DD4F0CBD20A908B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_9DD4F0CBD20A908B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10A9C91F322D679A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_10A9C91F322D679A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F743A7D6C5483553(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_F743A7D6C5483553_OFFSET))(a1, a2);
		}
	};
}
