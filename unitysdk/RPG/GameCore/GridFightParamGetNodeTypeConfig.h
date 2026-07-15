#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_METHOD_6_4C5BC4E33DB7E7EF_OFFSET UNITYSDK_OFFSET(0x1D06DA90)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_METHOD_6_95F9EA28FDB14EB3_OFFSET UNITYSDK_OFFSET(0x1D06DAE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06DAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNodeTypeConfig_TypeDefinitionIndex = 18790;

	class GridFightParamGetNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4C5BC4E33DB7E7EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNodeTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNodeTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_METHOD_6_4C5BC4E33DB7E7EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_95F9EA28FDB14EB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_METHOD_6_95F9EA28FDB14EB3_OFFSET))(a1, a2);
		}
	};
}
