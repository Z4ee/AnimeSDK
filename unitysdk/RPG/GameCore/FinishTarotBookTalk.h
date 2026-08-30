#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHTAROTBOOKTALK_METHOD_3_259852AB4C10F6A4_OFFSET UNITYSDK_OFFSET(0x1D09BD50)
#define RPG_GAMECORE_FINISHTAROTBOOKTALK_METHOD_3_C660CAEF43ECE021_OFFSET UNITYSDK_OFFSET(0x1D09BE20)
#define RPG_GAMECORE_FINISHTAROTBOOKTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishTarotBookTalk_TypeDefinitionIndex = 20894;

	class FinishTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTAROTBOOKTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_259852AB4C10F6A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishTarotBookTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishTarotBookTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTAROTBOOKTALK_METHOD_3_259852AB4C10F6A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C660CAEF43ECE021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTAROTBOOKTALK_METHOD_3_C660CAEF43ECE021_OFFSET))(a1, a2);
		}
	};
}
