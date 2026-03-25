#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_6_66310D3B77CEB5D1_OFFSET UNITYSDK_OFFSET(0x171CA100)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_6_787672ABA87187B7_OFFSET UNITYSDK_OFFSET(0x171C9E70)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CA040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamFateBuffLevelSumConfig_TypeDefinitionIndex = 15247;

	class FateParamFateBuffLevelSumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::UInt32 SubTraitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_787672ABA87187B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_6_787672ABA87187B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_66310D3B77CEB5D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_6_66310D3B77CEB5D1_OFFSET))(a1, a2);
		}
	};
}
