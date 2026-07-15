#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_00922438CF3D88E4_OFFSET UNITYSDK_OFFSET(0x1BA14850)
#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_5ABFE8E95CEE0BB6_OFFSET UNITYSDK_OFFSET(0x1BA147F0)
#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_B25F1F3414B44449_OFFSET UNITYSDK_OFFSET(0x1BA146B0)
#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_E1A307E8D8FA9443_OFFSET UNITYSDK_OFFSET(0x1BA14670)
#define RPG_GAMECORE_PREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA14B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateConfig_TypeDefinitionIndex = 22887;

	class PredicateConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Inverse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1A307E8D8FA9443(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_E1A307E8D8FA9443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B25F1F3414B44449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_B25F1F3414B44449_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5ABFE8E95CEE0BB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_5ABFE8E95CEE0BB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00922438CF3D88E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_00922438CF3D88E4_OFFSET))(a1, a2);
		}
	};
}
