#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_42B0BAF6DFDA3F0F_OFFSET UNITYSDK_OFFSET(0x1B059C10)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_BB483397B0E20492_OFFSET UNITYSDK_OFFSET(0x1B059B40)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B059C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamMovePhaseTalk_TypeDefinitionIndex = 19252;

	class TriggerPamMovePhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB483397B0E20492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_BB483397B0E20492_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42B0BAF6DFDA3F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_METHOD_3_42B0BAF6DFDA3F0F_OFFSET))(a1, a2);
		}
	};
}
