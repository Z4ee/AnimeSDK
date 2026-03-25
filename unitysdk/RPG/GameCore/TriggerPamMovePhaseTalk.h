#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_42B0BAF6DFDA3F0F_OFFSET UNITYSDK_OFFSET(0x178CB820)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_B6113C930AF16D9B_OFFSET UNITYSDK_OFFSET(0x178CB710)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x178CB7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamMovePhaseTalk_TypeDefinitionIndex = 18301;

	class TriggerPamMovePhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6113C930AF16D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_B6113C930AF16D9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42B0BAF6DFDA3F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_42B0BAF6DFDA3F0F_OFFSET))(a1, a2);
		}
	};
}
