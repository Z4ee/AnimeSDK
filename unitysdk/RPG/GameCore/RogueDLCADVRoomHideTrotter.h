#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_873339EBA2B7E38D_OFFSET UNITYSDK_OFFSET(0x175F0CB0)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_B2B43234FD1CFF2C_OFFSET UNITYSDK_OFFSET(0x175F0C30)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER__CTOR_OFFSET UNITYSDK_OFFSET(0x175F0C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCADVRoomHideTrotter_TypeDefinitionIndex = 20473;

	class RogueDLCADVRoomHideTrotter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2B43234FD1CFF2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_B2B43234FD1CFF2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_873339EBA2B7E38D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_METHOD_3_873339EBA2B7E38D_OFFSET))(a1, a2);
		}
	};
}
