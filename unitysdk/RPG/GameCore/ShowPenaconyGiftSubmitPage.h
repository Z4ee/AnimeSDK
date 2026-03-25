#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_METHOD_3_4D855E2DBC2FC379_OFFSET UNITYSDK_OFFSET(0x17700BF0)
#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_METHOD_3_A0E19DA5FD4C5DF0_OFFSET UNITYSDK_OFFSET(0x17700B70)
#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17700BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPenaconyGiftSubmitPage_TypeDefinitionIndex = 19546;

	class ShowPenaconyGiftSubmitPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GiftID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0E19DA5FD4C5DF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_METHOD_3_A0E19DA5FD4C5DF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D855E2DBC2FC379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_METHOD_3_4D855E2DBC2FC379_OFFSET))(a1, a2);
		}
	};
}
