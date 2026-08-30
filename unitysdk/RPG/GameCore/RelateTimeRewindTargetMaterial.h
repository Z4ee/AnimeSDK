#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL_METHOD_3_B6D4D6C0C45A4AE2_OFFSET UNITYSDK_OFFSET(0x1D391340)
#define RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL_METHOD_3_FD48701E6D077869_OFFSET UNITYSDK_OFFSET(0x1D391380)
#define RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D391370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelateTimeRewindTargetMaterial_TypeDefinitionIndex = 20435;

	class RelateTimeRewindTargetMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6D4D6C0C45A4AE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelateTimeRewindTargetMaterial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelateTimeRewindTargetMaterial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL_METHOD_3_B6D4D6C0C45A4AE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD48701E6D077869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelateTimeRewindTargetMaterial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelateTimeRewindTargetMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELATETIMEREWINDTARGETMATERIAL_METHOD_3_FD48701E6D077869_OFFSET))(a1, a2);
		}
	};
}
