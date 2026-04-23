#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_1975C5DAE9BE3B75_OFFSET UNITYSDK_OFFSET(0x18E47CE0)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_CBE79FEED89D21B9_OFFSET UNITYSDK_OFFSET(0x18E47C60)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E47CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityActive_TypeDefinitionIndex = 19654;

	class SetTimeRewindEntityActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Active; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBE79FEED89D21B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_CBE79FEED89D21B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1975C5DAE9BE3B75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_METHOD_3_1975C5DAE9BE3B75_OFFSET))(a1, a2);
		}
	};
}
