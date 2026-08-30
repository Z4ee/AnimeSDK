#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_METHOD_3_14587A81DF4441F6_OFFSET UNITYSDK_OFFSET(0x1D9B63C0)
#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_METHOD_3_B7AEBA0C7E3BC36F_OFFSET UNITYSDK_OFFSET(0x1D9B62D0)
#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B6360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeActionCountDown_TypeDefinitionIndex = 23418;

	class ConsumeActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConsumeValue; // 0x18
		::System::Boolean TriggerModifierEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7AEBA0C7E3BC36F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_METHOD_3_B7AEBA0C7E3BC36F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14587A81DF4441F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_METHOD_3_14587A81DF4441F6_OFFSET))(a1, a2);
		}
	};
}
