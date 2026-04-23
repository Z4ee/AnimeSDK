#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_4A66C9E8C9B25A1B_OFFSET UNITYSDK_OFFSET(0x18652910)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_D706484C9E9B2B8F_OFFSET UNITYSDK_OFFSET(0x18652A20)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND__CTOR_OFFSET UNITYSDK_OFFSET(0x186529F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcEnd_TypeDefinitionIndex = 21056;

	class AdvGameplayTrackNpcEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A66C9E8C9B25A1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_4A66C9E8C9B25A1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D706484C9E9B2B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_METHOD_3_D706484C9E9B2B8F_OFFSET))(a1, a2);
		}
	};
}
