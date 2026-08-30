#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALUI_METHOD_3_592AA79B315CA72A_OFFSET UNITYSDK_OFFSET(0x1D09CF10)
#define RPG_GAMECORE_SHOWTUTORIALUI_METHOD_3_C44F5D702F878E8B_OFFSET UNITYSDK_OFFSET(0x1D09CED0)
#define RPG_GAMECORE_SHOWTUTORIALUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialUI_TypeDefinitionIndex = 20655;

	class ShowTutorialUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::String* AssociatedUIName; // 0x20
		::System::Boolean ForceShowDialog; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C44F5D702F878E8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI_METHOD_3_C44F5D702F878E8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_592AA79B315CA72A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUI_METHOD_3_592AA79B315CA72A_OFFSET))(a1, a2);
		}
	};
}
