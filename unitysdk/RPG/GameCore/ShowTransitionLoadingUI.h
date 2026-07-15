#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_METHOD_3_7A261972DF2570AE_OFFSET UNITYSDK_OFFSET(0x1BE487C0)
#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_METHOD_3_82D6BCF3FF7C3E6D_OFFSET UNITYSDK_OFFSET(0x1BE48780)
#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE487B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTransitionLoadingUI_TypeDefinitionIndex = 20907;

	class ShowTransitionLoadingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82D6BCF3FF7C3E6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTransitionLoadingUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTransitionLoadingUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_METHOD_3_82D6BCF3FF7C3E6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A261972DF2570AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_METHOD_3_7A261972DF2570AE_OFFSET))(a1, a2);
		}
	};
}
