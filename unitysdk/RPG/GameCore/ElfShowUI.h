#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFSHOWUI_METHOD_3_2CB5E327299DD450_OFFSET UNITYSDK_OFFSET(0x171912B0)
#define RPG_GAMECORE_ELFSHOWUI_METHOD_3_4E3C7DF97C5F1F09_OFFSET UNITYSDK_OFFSET(0x17191230)
#define RPG_GAMECORE_ELFSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x17191280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfShowUI_TypeDefinitionIndex = 19904;

	class ElfShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E3C7DF97C5F1F09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI_METHOD_3_4E3C7DF97C5F1F09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CB5E327299DD450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI_METHOD_3_2CB5E327299DD450_OFFSET))(a1, a2);
		}
	};
}
