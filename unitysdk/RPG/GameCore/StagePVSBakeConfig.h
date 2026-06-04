#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSBAKECONFIG_METHOD_2_8D1AFC2E1FD56D26_OFFSET UNITYSDK_OFFSET(0x19CAC790)
#define RPG_GAMECORE_STAGEPVSBAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAC7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSBakeConfig_TypeDefinitionIndex = 18193;

	class StagePVSBakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSBAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D1AFC2E1FD56D26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSBakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSBakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSBAKECONFIG_METHOD_2_8D1AFC2E1FD56D26_OFFSET))(a1, a2);
		}
	};
}
