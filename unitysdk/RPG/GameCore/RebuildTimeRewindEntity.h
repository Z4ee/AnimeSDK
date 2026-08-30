#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY_METHOD_3_49B882ED427B841F_OFFSET UNITYSDK_OFFSET(0x1D38A240)
#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY_METHOD_3_807A2287273E3F44_OFFSET UNITYSDK_OFFSET(0x1D38A280)
#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38A270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RebuildTimeRewindEntity_TypeDefinitionIndex = 20403;

	class RebuildTimeRewindEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49B882ED427B841F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RebuildTimeRewindEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RebuildTimeRewindEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY_METHOD_3_49B882ED427B841F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_807A2287273E3F44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RebuildTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RebuildTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY_METHOD_3_807A2287273E3F44_OFFSET))(a1, a2);
		}
	};
}
