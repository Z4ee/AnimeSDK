#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_6_04F871CD1FB5B7CA_OFFSET UNITYSDK_OFFSET(0x189C4360)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_6_113EAC5353D28D44_OFFSET UNITYSDK_OFFSET(0x189C4610)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C44E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetItemNumConfig_TypeDefinitionIndex = 18536;

	class GridFightParamGetItemNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_04F871CD1FB5B7CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetItemNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_6_04F871CD1FB5B7CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_113EAC5353D28D44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetItemNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_6_113EAC5353D28D44_OFFSET))(a1, a2);
		}
	};
}
