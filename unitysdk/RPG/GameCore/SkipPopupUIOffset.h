#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKIPPOPUPUIOFFSET_METHOD_3_3589471145E55210_OFFSET UNITYSDK_OFFSET(0x18E73B20)
#define RPG_GAMECORE_SKIPPOPUPUIOFFSET_METHOD_3_3CC6C26BB09F51C9_OFFSET UNITYSDK_OFFSET(0x18E73AA0)
#define RPG_GAMECORE_SKIPPOPUPUIOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18E73AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkipPopupUIOffset_TypeDefinitionIndex = 21767;

	class SkipPopupUIOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSkip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPPOPUPUIOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CC6C26BB09F51C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkipPopupUIOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkipPopupUIOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPPOPUPUIOFFSET_METHOD_3_3CC6C26BB09F51C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3589471145E55210(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkipPopupUIOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkipPopupUIOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPPOPUPUIOFFSET_METHOD_3_3589471145E55210_OFFSET))(a1, a2);
		}
	};
}
