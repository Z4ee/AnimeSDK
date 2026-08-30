#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_196DFB9C4DCD293F_OFFSET UNITYSDK_OFFSET(0x1D15D520)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_7A91878186EE9543_OFFSET UNITYSDK_OFFSET(0x1D15D570)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastNodeTypeConfig_TypeDefinitionIndex = 19316;

	class GridFightParamGetLastNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_196DFB9C4DCD293F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_196DFB9C4DCD293F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7A91878186EE9543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_METHOD_6_7A91878186EE9543_OFFSET))(a1, a2);
		}
	};
}
