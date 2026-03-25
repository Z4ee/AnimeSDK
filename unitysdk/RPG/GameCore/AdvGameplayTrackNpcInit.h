#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_AACB64638028164E_OFFSET UNITYSDK_OFFSET(0x16F30A20)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_F1DF49FDD660D182_OFFSET UNITYSDK_OFFSET(0x16F30910)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F309F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcInit_TypeDefinitionIndex = 20372;

	class AdvGameplayTrackNpcInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1DF49FDD660D182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_F1DF49FDD660D182_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AACB64638028164E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_AACB64638028164E_OFFSET))(a1, a2);
		}
	};
}
