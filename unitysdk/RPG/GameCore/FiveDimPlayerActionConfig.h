#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG_METHOD_2_9678E7485DC2437B_OFFSET UNITYSDK_OFFSET(0x17201F50)
#define RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17202020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerActionConfig_TypeDefinitionIndex = 15271;

	class FiveDimPlayerActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9678E7485DC2437B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERACTIONCONFIG_METHOD_2_9678E7485DC2437B_OFFSET))(a1, a2);
		}
	};
}
