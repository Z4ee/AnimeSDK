#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_35B2D4F2AA4728F1_OFFSET UNITYSDK_OFFSET(0x19C51F20)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_D719A85E8FE5392D_OFFSET UNITYSDK_OFFSET(0x19C51FA0)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C51F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIgnoreTimeRewindLockRangeLimit_TypeDefinitionIndex = 19513;

	class SetIgnoreTimeRewindLockRangeLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Ignore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35B2D4F2AA4728F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_35B2D4F2AA4728F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D719A85E8FE5392D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_D719A85E8FE5392D_OFFSET))(a1, a2);
		}
	};
}
