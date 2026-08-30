#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELWAYPOINTINFO_METHOD_3_3FE8EFD692817C25_OFFSET UNITYSDK_OFFSET(0x1D1F19B0)
#define RPG_GAMECORE_LEVELWAYPOINTINFO_METHOD_3_85E2C203168D1194_OFFSET UNITYSDK_OFFSET(0x1D1F1970)
#define RPG_GAMECORE_LEVELWAYPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F19A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelWaypointInfo_TypeDefinitionIndex = 17055;

	class LevelWaypointInfo : public ::RPG::GameCore::LevelObjectInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85E2C203168D1194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelWaypointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelWaypointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO_METHOD_3_85E2C203168D1194_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FE8EFD692817C25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelWaypointInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelWaypointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO_METHOD_3_3FE8EFD692817C25_OFFSET))(a1, a2);
		}
	};
}
