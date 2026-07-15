#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_METHOD_3_B1A14523FA38A19F_OFFSET UNITYSDK_OFFSET(0x1B71A650)
#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_METHOD_3_B5FEC447646C0C04_OFFSET UNITYSDK_OFFSET(0x1B71A690)
#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71A680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeIncomingActionCountDown_TypeDefinitionIndex = 22842;

	class ChangeIncomingActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1A14523FA38A19F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeIncomingActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeIncomingActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_METHOD_3_B1A14523FA38A19F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5FEC447646C0C04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeIncomingActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeIncomingActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_METHOD_3_B5FEC447646C0C04_OFFSET))(a1, a2);
		}
	};
}
