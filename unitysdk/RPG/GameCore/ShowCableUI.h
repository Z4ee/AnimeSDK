#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWCABLEUI_METHOD_3_C1CAF85E82BC851E_OFFSET UNITYSDK_OFFSET(0x1E0A5410)
#define RPG_GAMECORE_SHOWCABLEUI_METHOD_3_E7F984F52C5A1DDD_OFFSET UNITYSDK_OFFSET(0x1E0A53D0)
#define RPG_GAMECORE_SHOWCABLEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowCableUI_TypeDefinitionIndex = 20659;

	class ShowCableUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7F984F52C5A1DDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowCableUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowCableUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI_METHOD_3_E7F984F52C5A1DDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1CAF85E82BC851E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowCableUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowCableUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI_METHOD_3_C1CAF85E82BC851E_OFFSET))(a1, a2);
		}
	};
}
