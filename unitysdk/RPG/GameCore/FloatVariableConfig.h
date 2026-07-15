#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FLOATVARIABLECONFIG_METHOD_2_A04FE3F194013DB9_OFFSET UNITYSDK_OFFSET(0x1BEBAB80)
#define RPG_GAMECORE_FLOATVARIABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBAC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatVariableConfig_TypeDefinitionIndex = 14884;

	class FloatVariableConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VariableName; // 0x10
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATVARIABLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A04FE3F194013DB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatVariableConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatVariableConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATVARIABLECONFIG_METHOD_2_A04FE3F194013DB9_OFFSET))(a1, a2);
		}
	};
}
