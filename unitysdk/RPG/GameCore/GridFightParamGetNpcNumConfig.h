#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_6_03F605C3073DAFB6_OFFSET UNITYSDK_OFFSET(0x1D15D7C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_6_3D9103C63A54F612_OFFSET UNITYSDK_OFFSET(0x1D15D810)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNpcNumConfig_TypeDefinitionIndex = 19291;

	class GridFightParamGetNpcNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_03F605C3073DAFB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_6_03F605C3073DAFB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3D9103C63A54F612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_METHOD_6_3D9103C63A54F612_OFFSET))(a1, a2);
		}
	};
}
