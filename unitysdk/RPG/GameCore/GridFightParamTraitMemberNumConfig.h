#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_6_09A45A40B91A0673_OFFSET UNITYSDK_OFFSET(0x1D15E0B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_6_C01556666FA414AF_OFFSET UNITYSDK_OFFSET(0x1D15E060)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15E0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitMemberNumConfig_TypeDefinitionIndex = 19277;

	class GridFightParamTraitMemberNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C01556666FA414AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_6_C01556666FA414AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_09A45A40B91A0673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_METHOD_6_09A45A40B91A0673_OFFSET))(a1, a2);
		}
	};
}
