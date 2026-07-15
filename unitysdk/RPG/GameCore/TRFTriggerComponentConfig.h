#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_94DB4582C1F38915_OFFSET UNITYSDK_OFFSET(0x1B447BE0)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_EA9E2D631A876923_OFFSET UNITYSDK_OFFSET(0x1B447C40)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B447C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFTriggerComponentConfig_TypeDefinitionIndex = 18164;

	class TRFTriggerComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* ActiveEntities; // 0x10
		::Il2CppArray<::System::UInt32>* DeactiveEntities; // 0x18
		::System::Boolean TriggerOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94DB4582C1F38915(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTriggerComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTriggerComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_94DB4582C1F38915_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA9E2D631A876923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTriggerComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTriggerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_EA9E2D631A876923_OFFSET))(a1, a2);
		}
	};
}
