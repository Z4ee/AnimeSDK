#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_METHOD_3_B524E4EFDC289D96_OFFSET UNITYSDK_OFFSET(0x1D02CA50)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_METHOD_3_E4020332D8F5E695_OFFSET UNITYSDK_OFFSET(0x1D02CA10)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02CA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewindTimeRewindTargetInRange_TypeDefinitionIndex = 19873;

	class RewindTimeRewindTargetInRange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Range; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4020332D8F5E695(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewindTimeRewindTargetInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_METHOD_3_E4020332D8F5E695_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B524E4EFDC289D96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RewindTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_METHOD_3_B524E4EFDC289D96_OFFSET))(a1, a2);
		}
	};
}
