#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_METHOD_2_EF36F5BCF7F6DB21_OFFSET UNITYSDK_OFFSET(0x1D963510)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D963550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConditionListConfig_TypeDefinitionIndex = 17399;

	class GridFightConditionListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF36F5BCF7F6DB21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConditionListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConditionListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONLISTCONFIG_METHOD_2_EF36F5BCF7F6DB21_OFFSET))(a1, a2);
		}
	};
}
