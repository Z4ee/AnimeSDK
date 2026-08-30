#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_METHOD_3_22F1C11E62F975C1_OFFSET UNITYSDK_OFFSET(0x1D10A070)
#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_METHOD_3_41DDD2F6BC314E44_OFFSET UNITYSDK_OFFSET(0x1D109F90)
#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10A060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlappyPipeRebuildAnchor_TypeDefinitionIndex = 18419;

	class FlappyPipeRebuildAnchor : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRebuildAnchor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41DDD2F6BC314E44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyPipeRebuildAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyPipeRebuildAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_METHOD_3_41DDD2F6BC314E44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22F1C11E62F975C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlappyPipeRebuildAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlappyPipeRebuildAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_METHOD_3_22F1C11E62F975C1_OFFSET))(a1, a2);
		}
	};
}
