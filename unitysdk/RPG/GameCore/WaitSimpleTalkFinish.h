#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_61135BAD6E3BB0D5_OFFSET UNITYSDK_OFFSET(0x1D6AC9A0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_AB6ACE9B396CBA98_OFFSET UNITYSDK_OFFSET(0x1D6AC8D0)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSimpleTalkFinish_TypeDefinitionIndex = 20606;

	class WaitSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB6ACE9B396CBA98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSimpleTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSimpleTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_AB6ACE9B396CBA98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61135BAD6E3BB0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_61135BAD6E3BB0D5_OFFSET))(a1, a2);
		}
	};
}
