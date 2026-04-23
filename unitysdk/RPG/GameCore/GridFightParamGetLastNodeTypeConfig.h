#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_7A91878186EE9543_OFFSET UNITYSDK_OFFSET(0x189C4B90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_FFBE2F5BDFB6498D_OFFSET UNITYSDK_OFFSET(0x189C48E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C4A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastNodeTypeConfig_TypeDefinitionIndex = 18555;

	class GridFightParamGetLastNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FFBE2F5BDFB6498D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_FFBE2F5BDFB6498D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7A91878186EE9543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_7A91878186EE9543_OFFSET))(a1, a2);
		}
	};
}
