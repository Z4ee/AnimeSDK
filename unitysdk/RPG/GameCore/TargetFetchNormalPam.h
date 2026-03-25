#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_9DD4F0CBD20A908B_OFFSET UNITYSDK_OFFSET(0x177B6F80)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_METHOD_4_B9DDACC7A11B543D_OFFSET UNITYSDK_OFFSET(0x177BF8C0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x177B6F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNormalPam_TypeDefinitionIndex = 22145;

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
	};
}
