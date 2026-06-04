#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_METHOD_2_F12A719CED8265AE_OFFSET UNITYSDK_OFFSET(0x1976DF30)
#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1976DF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleObsoleteMotionList_TypeDefinitionIndex = 15504;

	class FreeStyleObsoleteMotionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F12A719CED8265AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleObsoleteMotionList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleObsoleteMotionList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_METHOD_2_F12A719CED8265AE_OFFSET))(a1, a2);
		}
	};
}
