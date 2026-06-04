#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMenuItem.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDTIMELINEMENUITEM_METHOD_4_782D03A3339DC5F6_OFFSET UNITYSDK_OFFSET(0x19413BB0)
#define RPG_GAMECORE_ADDTIMELINEMENUITEM_METHOD_4_BB89D521DDF4495C_OFFSET UNITYSDK_OFFSET(0x1940FC00)
#define RPG_GAMECORE_ADDTIMELINEMENUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1940FBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimelineMenuItem_TypeDefinitionIndex = 19962;

	class AddTimelineMenuItem : public ::RPG::GameCore::AddMenuItem
	{
	public:
		::System::UInt32 GroupID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_782D03A3339DC5F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineMenuItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineMenuItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM_METHOD_4_782D03A3339DC5F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB89D521DDF4495C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineMenuItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM_METHOD_4_BB89D521DDF4495C_OFFSET))(a1, a2);
		}
	};
}
