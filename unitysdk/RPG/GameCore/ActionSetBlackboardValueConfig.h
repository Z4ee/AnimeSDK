#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_667D9F51418CC109_OFFSET UNITYSDK_OFFSET(0x16E9CD80)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_9D33E9B4FD69A996_OFFSET UNITYSDK_OFFSET(0x16E9CB30)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9CC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSetBlackboardValueConfig_TypeDefinitionIndex = 15617;

	class ActionSetBlackboardValueConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::String* Key; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D33E9B4FD69A996(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSetBlackboardValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_9D33E9B4FD69A996_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_667D9F51418CC109(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_667D9F51418CC109_OFFSET))(a1, a2);
		}
	};
}
