#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_METHOD_6_7779E3F109231B5B_OFFSET UNITYSDK_OFFSET(0x1E5457A0)
#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_METHOD_6_9690BD307408A6F7_OFFSET UNITYSDK_OFFSET(0x1E545750)
#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamGlobalValueConfig_TypeDefinitionIndex = 19603;

	class RogueParamGlobalValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9690BD307408A6F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamGlobalValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamGlobalValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_METHOD_6_9690BD307408A6F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7779E3F109231B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_METHOD_6_7779E3F109231B5B_OFFSET))(a1, a2);
		}
	};
}
