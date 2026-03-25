#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBTNBATTLEHINTINFO_METHOD_3_2773F621116DB1D7_OFFSET UNITYSDK_OFFSET(0x176AC080)
#define RPG_GAMECORE_SETBTNBATTLEHINTINFO_METHOD_3_5EC9E5B446C047B2_OFFSET UNITYSDK_OFFSET(0x176AC100)
#define RPG_GAMECORE_SETBTNBATTLEHINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x176AC0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBtnBattleHintInfo_TypeDefinitionIndex = 21688;

	class SetBtnBattleHintInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x18
		::System::UInt32 IntroID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2773F621116DB1D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBtnBattleHintInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBtnBattleHintInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO_METHOD_3_2773F621116DB1D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EC9E5B446C047B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBtnBattleHintInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO_METHOD_3_5EC9E5B446C047B2_OFFSET))(a1, a2);
		}
	};
}
