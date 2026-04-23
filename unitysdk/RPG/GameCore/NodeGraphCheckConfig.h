#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NODEGRAPHCHECKCONFIG_METHOD_2_040565E6F0C9291A_OFFSET UNITYSDK_OFFSET(0x18B800E0)
#define RPG_GAMECORE_NODEGRAPHCHECKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B80120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NodeGraphCheckConfig_TypeDefinitionIndex = 15566;

	class NodeGraphCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHCHECKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_040565E6F0C9291A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NodeGraphCheckConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NodeGraphCheckConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHCHECKCONFIG_METHOD_2_040565E6F0C9291A_OFFSET))(a1, a2);
		}
	};
}
