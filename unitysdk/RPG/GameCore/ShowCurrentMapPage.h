#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWCURRENTMAPPAGE_METHOD_3_1CF08E110A81B708_OFFSET UNITYSDK_OFFSET(0x19C77C20)
#define RPG_GAMECORE_SHOWCURRENTMAPPAGE_METHOD_3_3B38F5717A50113C_OFFSET UNITYSDK_OFFSET(0x19C77B10)
#define RPG_GAMECORE_SHOWCURRENTMAPPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C77BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowCurrentMapPage_TypeDefinitionIndex = 22540;

	class ShowCurrentMapPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B38F5717A50113C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowCurrentMapPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowCurrentMapPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE_METHOD_3_3B38F5717A50113C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CF08E110A81B708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowCurrentMapPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowCurrentMapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE_METHOD_3_1CF08E110A81B708_OFFSET))(a1, a2);
		}
	};
}
