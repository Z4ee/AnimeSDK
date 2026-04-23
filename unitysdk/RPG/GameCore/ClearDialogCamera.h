#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARDIALOGCAMERA_METHOD_3_B1B1A69AD8AFC38D_OFFSET UNITYSDK_OFFSET(0x18811140)
#define RPG_GAMECORE_CLEARDIALOGCAMERA_METHOD_3_FB859E49CA8AF519_OFFSET UNITYSDK_OFFSET(0x18811030)
#define RPG_GAMECORE_CLEARDIALOGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18811110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDialogCamera_TypeDefinitionIndex = 20107;

	class ClearDialogCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB859E49CA8AF519(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDialogCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDialogCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA_METHOD_3_FB859E49CA8AF519_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1B1A69AD8AFC38D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearDialogCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA_METHOD_3_B1B1A69AD8AFC38D_OFFSET))(a1, a2);
		}
	};
}
