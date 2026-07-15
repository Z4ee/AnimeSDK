#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_1975C5DAE9BE3B75_OFFSET UNITYSDK_OFFSET(0x1C60DD80)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_FC308DDFCB99CE42_OFFSET UNITYSDK_OFFSET(0x1C60DD40)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60DD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityActive_TypeDefinitionIndex = 19894;

	class SetTimeRewindEntityActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Active; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC308DDFCB99CE42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_FC308DDFCB99CE42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1975C5DAE9BE3B75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_1975C5DAE9BE3B75_OFFSET))(a1, a2);
		}
	};
}
