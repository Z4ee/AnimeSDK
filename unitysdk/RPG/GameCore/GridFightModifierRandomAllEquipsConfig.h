#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG_METHOD_3_03CB29F0F8B3575A_OFFSET UNITYSDK_OFFSET(0x1726B940)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG_METHOD_3_41074B0A1A749513_OFFSET UNITYSDK_OFFSET(0x172686E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17268690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomAllEquipsConfig_TypeDefinitionIndex = 17834;

	class GridFightModifierRandomAllEquipsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03CB29F0F8B3575A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomAllEquipsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomAllEquipsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG_METHOD_3_03CB29F0F8B3575A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41074B0A1A749513(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomAllEquipsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomAllEquipsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMALLEQUIPSCONFIG_METHOD_3_41074B0A1A749513_OFFSET))(a1, a2);
		}
	};
}
