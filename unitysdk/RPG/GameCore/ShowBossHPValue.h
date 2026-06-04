#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBOSSHPVALUE_METHOD_3_A42E522639A48D17_OFFSET UNITYSDK_OFFSET(0x19C771D0)
#define RPG_GAMECORE_SHOWBOSSHPVALUE_METHOD_3_C0D62BDDB4520966_OFFSET UNITYSDK_OFFSET(0x19C77150)
#define RPG_GAMECORE_SHOWBOSSHPVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C771A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBossHPValue_TypeDefinitionIndex = 21685;

	class ShowBossHPValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0D62BDDB4520966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBossHPValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBossHPValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE_METHOD_3_C0D62BDDB4520966_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A42E522639A48D17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBossHPValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE_METHOD_3_A42E522639A48D17_OFFSET))(a1, a2);
		}
	};
}
