#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_METHOD_2_662FE606DEDB3D05_OFFSET UNITYSDK_OFFSET(0x1726B470)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1726B4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierListConfig_TypeDefinitionIndex = 16199;

	class GridFightModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_662FE606DEDB3D05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLISTCONFIG_METHOD_2_662FE606DEDB3D05_OFFSET))(a1, a2);
		}
	};
}
