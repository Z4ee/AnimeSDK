#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_2E815E3A5536F415_OFFSET UNITYSDK_OFFSET(0x197FC980)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_51094F8680154FDB_OFFSET UNITYSDK_OFFSET(0x197FC6D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197FC850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetUseOrbNumConfig_TypeDefinitionIndex = 18527;

	class GridFightParamGetUseOrbNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_51094F8680154FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_51094F8680154FDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2E815E3A5536F415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetUseOrbNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETUSEORBNUMCONFIG_METHOD_6_2E815E3A5536F415_OFFSET))(a1, a2);
		}
	};
}
