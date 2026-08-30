#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDOORSETGOTOINFO_METHOD_3_08C3F769A21009E2_OFFSET UNITYSDK_OFFSET(0x1D92FBD0)
#define RPG_GAMECORE_ROGUEDOORSETGOTOINFO_METHOD_3_83108673725B309F_OFFSET UNITYSDK_OFFSET(0x1D92FB00)
#define RPG_GAMECORE_ROGUEDOORSETGOTOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D92FBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDoorSetGotoInfo_TypeDefinitionIndex = 22020;

	class RogueDoorSetGotoInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDOORSETGOTOINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83108673725B309F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDoorSetGotoInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDoorSetGotoInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDOORSETGOTOINFO_METHOD_3_83108673725B309F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08C3F769A21009E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDoorSetGotoInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDoorSetGotoInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDOORSETGOTOINFO_METHOD_3_08C3F769A21009E2_OFFSET))(a1, a2);
		}
	};
}
