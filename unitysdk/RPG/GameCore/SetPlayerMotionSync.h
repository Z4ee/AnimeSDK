#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPLAYERMOTIONSYNC_METHOD_3_13A66FCB5052FBBF_OFFSET UNITYSDK_OFFSET(0x176DB3C0)
#define RPG_GAMECORE_SETPLAYERMOTIONSYNC_METHOD_3_C3C2AB6B7407C3EE_OFFSET UNITYSDK_OFFSET(0x176DB440)
#define RPG_GAMECORE_SETPLAYERMOTIONSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x176DB410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPlayerMotionSync_TypeDefinitionIndex = 18816;

	class SetPlayerMotionSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13A66FCB5052FBBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPlayerMotionSync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPlayerMotionSync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC_METHOD_3_13A66FCB5052FBBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3C2AB6B7407C3EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPLAYERMOTIONSYNC_METHOD_3_C3C2AB6B7407C3EE_OFFSET))(a1, a2);
		}
	};
}
