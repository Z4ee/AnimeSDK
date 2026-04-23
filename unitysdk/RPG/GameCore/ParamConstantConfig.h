#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_4_364D9E8592E55E99_OFFSET UNITYSDK_OFFSET(0x18BD3500)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_4_5C2D597F6C0BD738_OFFSET UNITYSDK_OFFSET(0x18BD3300)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BD35A0)
#define RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD3480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConstantConfig_TypeDefinitionIndex = 16168;

	class ParamConstantConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Double Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void Method_4_5C2D597F6C0BD738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConstantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConstantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_4_5C2D597F6C0BD738_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_364D9E8592E55E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConstantConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConstantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONSTANTCONFIG_METHOD_4_364D9E8592E55E99_OFFSET))(a1, a2);
		}
	};
}
