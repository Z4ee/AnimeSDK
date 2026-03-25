#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NODEGRAPHRANGECONFIG_METHOD_2_9651E7521C8EB67F_OFFSET UNITYSDK_OFFSET(0x17473E60)
#define RPG_GAMECORE_NODEGRAPHRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17473EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NodeGraphRangeConfig_TypeDefinitionIndex = 15057;

	class NodeGraphRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9651E7521C8EB67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NodeGraphRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NodeGraphRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHRANGECONFIG_METHOD_2_9651E7521C8EB67F_OFFSET))(a1, a2);
		}
	};
}
