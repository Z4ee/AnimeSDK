#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_METHOD_2_FA57B17085E32CAE_OFFSET UNITYSDK_OFFSET(0x17672CF0)
#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17672D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueModifyFactor_TypeDefinitionIndex = 16557;

	class RogueValueModifyFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FA57B17085E32CAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueValueModifyFactor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueValueModifyFactor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_METHOD_2_FA57B17085E32CAE_OFFSET))(a1, a2);
		}
	};
}
