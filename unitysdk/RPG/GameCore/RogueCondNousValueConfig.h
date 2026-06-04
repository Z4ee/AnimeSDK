#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_6_9DFDC4CFC2E46052_OFFSET UNITYSDK_OFFSET(0x19B1CA90)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_6_9E6F130967C9B8FC_OFFSET UNITYSDK_OFFSET(0x19B1CD40)
#define RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1CC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondNousValueConfig_TypeDefinitionIndex = 18759;

	class RogueCondNousValueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9DFDC4CFC2E46052(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondNousValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondNousValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_6_9DFDC4CFC2E46052_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9E6F130967C9B8FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondNousValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDNOUSVALUECONFIG_METHOD_6_9E6F130967C9B8FC_OFFSET))(a1, a2);
		}
	};
}
