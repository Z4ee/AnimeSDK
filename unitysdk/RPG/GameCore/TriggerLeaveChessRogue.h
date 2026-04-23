#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_METHOD_3_34F4F33ACF68FF46_OFFSET UNITYSDK_OFFSET(0x190C7280)
#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_METHOD_3_9AFEF76AE47197B2_OFFSET UNITYSDK_OFFSET(0x190C7390)
#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x190C7360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerLeaveChessRogue_TypeDefinitionIndex = 20959;

	class TriggerLeaveChessRogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34F4F33ACF68FF46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLeaveChessRogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLeaveChessRogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_METHOD_3_34F4F33ACF68FF46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9AFEF76AE47197B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_METHOD_3_9AFEF76AE47197B2_OFFSET))(a1, a2);
		}
	};
}
