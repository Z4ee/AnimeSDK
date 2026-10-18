#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_4_3B529CDF18671659_OFFSET UNITYSDK_OFFSET(0x1D6AE6B0)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_4_F23C9F14C4CF7F77_OFFSET UNITYSDK_OFFSET(0x1D6AE600)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddMoneyAction_TypeDefinitionIndex = 18724;

	class FiveDimAddMoneyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AddNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F23C9F14C4CF7F77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddMoneyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddMoneyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_4_F23C9F14C4CF7F77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B529CDF18671659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_4_3B529CDF18671659_OFFSET))(a1, a2);
		}
	};
}
