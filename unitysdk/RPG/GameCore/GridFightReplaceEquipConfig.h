#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_METHOD_2_9E9871DC4C4B73EC_OFFSET UNITYSDK_OFFSET(0x1D3B38C0)
#define RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B3900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightReplaceEquipConfig_TypeDefinitionIndex = 19242;

	class GridFightReplaceEquipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9E9871DC4C4B73EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightReplaceEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightReplaceEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTREPLACEEQUIPCONFIG_METHOD_2_9E9871DC4C4B73EC_OFFSET))(a1, a2);
		}
	};
}
