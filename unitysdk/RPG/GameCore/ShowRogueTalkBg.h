#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUETALKBG_METHOD_3_134CE06222EB946C_OFFSET UNITYSDK_OFFSET(0x1D099930)
#define RPG_GAMECORE_SHOWROGUETALKBG_METHOD_3_B327FA89D078427F_OFFSET UNITYSDK_OFFSET(0x1D0998F0)
#define RPG_GAMECORE_SHOWROGUETALKBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D099920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueTalkBg_TypeDefinitionIndex = 20872;

	class ShowRogueTalkBg : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkBgID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B327FA89D078427F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueTalkBg*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueTalkBg*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG_METHOD_3_B327FA89D078427F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_134CE06222EB946C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueTalkBg* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueTalkBg*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG_METHOD_3_134CE06222EB946C_OFFSET))(a1, a2);
		}
	};
}
