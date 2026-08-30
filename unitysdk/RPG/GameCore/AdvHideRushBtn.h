#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVHIDERUSHBTN_METHOD_3_52500ABDF6F6499B_OFFSET UNITYSDK_OFFSET(0x1CDCC110)
#define RPG_GAMECORE_ADVHIDERUSHBTN_METHOD_3_C38C5F186DC2E3C8_OFFSET UNITYSDK_OFFSET(0x1CDCC0D0)
#define RPG_GAMECORE_ADVHIDERUSHBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCC100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvHideRushBtn_TypeDefinitionIndex = 19966;

	class AdvHideRushBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C38C5F186DC2E3C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideRushBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideRushBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN_METHOD_3_C38C5F186DC2E3C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52500ABDF6F6499B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvHideRushBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvHideRushBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN_METHOD_3_52500ABDF6F6499B_OFFSET))(a1, a2);
		}
	};
}
