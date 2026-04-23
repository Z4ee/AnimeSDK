#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_6_9E99C6891DC38068_OFFSET UNITYSDK_OFFSET(0x189C4E60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_6_F48435C241017AAE_OFFSET UNITYSDK_OFFSET(0x189C5110)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C4FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftNodeNumConfig_TypeDefinitionIndex = 18551;

	class GridFightParamGetLeftNodeNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9E99C6891DC38068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_6_9E99C6891DC38068_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F48435C241017AAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_METHOD_6_F48435C241017AAE_OFFSET))(a1, a2);
		}
	};
}
