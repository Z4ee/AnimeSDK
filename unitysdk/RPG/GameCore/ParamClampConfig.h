#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_1805F7E419C041B6_OFFSET UNITYSDK_OFFSET(0x199E4960)
#define RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_3956DD3B8FC1BA5D_OFFSET UNITYSDK_OFFSET(0x199E4AA0)
#define RPG_GAMECORE_PARAMCLAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E4A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamClampConfig_TypeDefinitionIndex = 16224;

	class ParamClampConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Min; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Max; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1805F7E419C041B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamClampConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamClampConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_1805F7E419C041B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3956DD3B8FC1BA5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamClampConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamClampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_3956DD3B8FC1BA5D_OFFSET))(a1, a2);
		}
	};
}
