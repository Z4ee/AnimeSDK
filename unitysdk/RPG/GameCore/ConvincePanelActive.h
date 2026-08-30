#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEPANELACTIVE_METHOD_3_4D5D2BB3EC7934D6_OFFSET UNITYSDK_OFFSET(0x1D9BA890)
#define RPG_GAMECORE_CONVINCEPANELACTIVE_METHOD_3_9EB7E3E0B3776E87_OFFSET UNITYSDK_OFFSET(0x1D9BA850)
#define RPG_GAMECORE_CONVINCEPANELACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BA880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvincePanelActive_TypeDefinitionIndex = 21595;

	class ConvincePanelActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DoubleScreenActive; // 0x18
		::System::Boolean UIActive; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPANELACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9EB7E3E0B3776E87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePanelActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePanelActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPANELACTIVE_METHOD_3_9EB7E3E0B3776E87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D5D2BB3EC7934D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePanelActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePanelActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPANELACTIVE_METHOD_3_4D5D2BB3EC7934D6_OFFSET))(a1, a2);
		}
	};
}
