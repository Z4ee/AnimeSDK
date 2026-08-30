#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG_METHOD_3_528C95A8C2B5314E_OFFSET UNITYSDK_OFFSET(0x1CF97F20)
#define RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG_METHOD_3_FD1C89410267177A_OFFSET UNITYSDK_OFFSET(0x1CF97FF0)
#define RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF97FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterModelComponentConfig_TypeDefinitionIndex = 16386;

	class CharacterModelComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::RPG::GameCore::DynamicString* ModelPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_528C95A8C2B5314E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterModelComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterModelComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG_METHOD_3_528C95A8C2B5314E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD1C89410267177A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterModelComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterModelComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELCOMPONENTCONFIG_METHOD_3_FD1C89410267177A_OFFSET))(a1, a2);
		}
	};
}
