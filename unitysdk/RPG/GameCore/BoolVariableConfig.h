#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOOLVARIABLECONFIG_METHOD_2_79A70EDC5D9AD0DB_OFFSET UNITYSDK_OFFSET(0x1C2E4930)
#define RPG_GAMECORE_BOOLVARIABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E4A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoolVariableConfig_TypeDefinitionIndex = 15319;

	class BoolVariableConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VariableName; // 0x10
		::System::Boolean Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLVARIABLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79A70EDC5D9AD0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoolVariableConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoolVariableConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLVARIABLECONFIG_METHOD_2_79A70EDC5D9AD0DB_OFFSET))(a1, a2);
		}
	};
}
