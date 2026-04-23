#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_METHOD_3_3169BCC6475D4B45_OFFSET UNITYSDK_OFFSET(0x190CFF20)
#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_METHOD_3_3826205E9590C3F1_OFFSET UNITYSDK_OFFSET(0x190CFE10)
#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x190CFEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryShowFateEntranceUI_TypeDefinitionIndex = 20990;

	class TryShowFateEntranceUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3826205E9590C3F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryShowFateEntranceUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryShowFateEntranceUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_METHOD_3_3826205E9590C3F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3169BCC6475D4B45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryShowFateEntranceUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryShowFateEntranceUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_METHOD_3_3169BCC6475D4B45_OFFSET))(a1, a2);
		}
	};
}
