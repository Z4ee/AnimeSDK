#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_METHOD_3_D830B52A77F54350_OFFSET UNITYSDK_OFFSET(0x18E5B580)
#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_METHOD_3_F9B74FFCCAB68E09_OFFSET UNITYSDK_OFFSET(0x18E5B500)
#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5B550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowChallegeStoryWavePanel_TypeDefinitionIndex = 22430;

	class ShowChallegeStoryWavePanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9B74FFCCAB68E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallegeStoryWavePanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_METHOD_3_F9B74FFCCAB68E09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D830B52A77F54350(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowChallegeStoryWavePanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_METHOD_3_D830B52A77F54350_OFFSET))(a1, a2);
		}
	};
}
