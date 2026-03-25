#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_0A5CFC36F2C044BE_OFFSET UNITYSDK_OFFSET(0x16F30CB0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_2689B526D43AA5AA_OFFSET UNITYSDK_OFFSET(0x16F30DC0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x16F30D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcStart_TypeDefinitionIndex = 20373;

	class AdvGameplayTrackNpcStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A5CFC36F2C044BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_0A5CFC36F2C044BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2689B526D43AA5AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCSTART_METHOD_3_2689B526D43AA5AA_OFFSET))(a1, a2);
		}
	};
}
