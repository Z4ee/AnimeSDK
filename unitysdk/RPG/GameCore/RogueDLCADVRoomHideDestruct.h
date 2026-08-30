#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_METHOD_3_46AE336719CE837A_OFFSET UNITYSDK_OFFSET(0x1D3CD4F0)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_METHOD_3_94774DB493A1CF39_OFFSET UNITYSDK_OFFSET(0x1D3CD530)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCADVRoomHideDestruct_TypeDefinitionIndex = 22031;

	class RogueDLCADVRoomHideDestruct : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_46AE336719CE837A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_METHOD_3_46AE336719CE837A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94774DB493A1CF39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_METHOD_3_94774DB493A1CF39_OFFSET))(a1, a2);
		}
	};
}
