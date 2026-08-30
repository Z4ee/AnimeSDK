#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_998E36D83AF1CF7A_OFFSET UNITYSDK_OFFSET(0x1D502540)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_D719A85E8FE5392D_OFFSET UNITYSDK_OFFSET(0x1D502580)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D502700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIgnoreTimeRewindLockRangeLimit_TypeDefinitionIndex = 20417;

	class SetIgnoreTimeRewindLockRangeLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Ignore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_998E36D83AF1CF7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_998E36D83AF1CF7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D719A85E8FE5392D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_METHOD_3_D719A85E8FE5392D_OFFSET))(a1, a2);
		}
	};
}
