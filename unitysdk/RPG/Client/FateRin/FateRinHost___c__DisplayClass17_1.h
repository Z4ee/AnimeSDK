#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::FateRin { class FateRinHost___c__DisplayClass17_0; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A7EB0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1B5A7EC0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x1B5A7F30)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass17_1_TypeDefinitionIndex = 79201;

	class FateRinHost___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* view; // 0x10
		::RPG::Client::FateRin::FateRinHost___c__DisplayClass17_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCardRewardReplaceDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _ShowCardRewardReplaceDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__2_OFFSET))(this);
		}
	};
}
