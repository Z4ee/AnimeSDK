#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_CC5F3F63D2C95D7F_OFFSET UNITYSDK_OFFSET(0x1DB92FA0)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_F2288BD80A432842_OFFSET UNITYSDK_OFFSET(0x1DB93070)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB93060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetFloorDefaultEmotion_TypeDefinitionIndex = 21030;

	class ResetFloorDefaultEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC5F3F63D2C95D7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetFloorDefaultEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetFloorDefaultEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_CC5F3F63D2C95D7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2288BD80A432842(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_F2288BD80A432842_OFFSET))(a1, a2);
		}
	};
}
