#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_781E486E6687E5DB_OFFSET UNITYSDK_OFFSET(0x1E546650)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_E1EC1981FE22B847_OFFSET UNITYSDK_OFFSET(0x1E5466B0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParameterConfigBase_TypeDefinitionIndex = 19587;

	class RogueParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_781E486E6687E5DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_781E486E6687E5DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E1EC1981FE22B847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_E1EC1981FE22B847_OFFSET))(a1, a2);
		}
	};
}
