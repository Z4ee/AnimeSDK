#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RuntimeStageCaptureAliasData; }

#define RPG_GAMECORE_ALIASCONFIG_METHOD_2_D1F05DE0A2C03A67_OFFSET UNITYSDK_OFFSET(0x16F6D9C0)
#define RPG_GAMECORE_ALIASCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AliasConfig_TypeDefinitionIndex = 17578;

	class AliasConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RuntimeStageCaptureAliasData*>* IndexToAlias; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIASCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1F05DE0A2C03A67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AliasConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AliasConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALIASCONFIG_METHOD_2_D1F05DE0A2C03A67_OFFSET))(a1, a2);
		}
	};
}
