#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_280A4F03141909B6_OFFSET UNITYSDK_OFFSET(0x1C4B0720)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_873339EBA2B7E38D_OFFSET UNITYSDK_OFFSET(0x1C4B0760)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCADVRoomHideTrotter_TypeDefinitionIndex = 21468;

	class RogueDLCADVRoomHideTrotter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_280A4F03141909B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_280A4F03141909B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_873339EBA2B7E38D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_873339EBA2B7E38D_OFFSET))(a1, a2);
		}
	};
}
