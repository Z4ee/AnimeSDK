#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_34BED98CF2CC7555_OFFSET UNITYSDK_OFFSET(0x1CD73180)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_3E52E51DE0C54F40_OFFSET UNITYSDK_OFFSET(0x1CD73260)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD73210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSetBlackboardValueConfig_TypeDefinitionIndex = 16859;

	class ActionSetBlackboardValueConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::String* Key; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34BED98CF2CC7555(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSetBlackboardValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_34BED98CF2CC7555_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E52E51DE0C54F40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_METHOD_4_3E52E51DE0C54F40_OFFSET))(a1, a2);
		}
	};
}
