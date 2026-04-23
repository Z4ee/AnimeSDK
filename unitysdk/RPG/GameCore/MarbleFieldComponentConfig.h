#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_9D9E2BC0CF699F39_OFFSET UNITYSDK_OFFSET(0x18A9BEB0)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_A61FD3697014BDD4_OFFSET UNITYSDK_OFFSET(0x18A9BF40)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleFieldComponentConfig_TypeDefinitionIndex = 17957;

	class MarbleFieldComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Length; // 0x10
		::System::Single Width; // 0x14
		::Il2CppArray<::System::UInt32>* BornPositionA; // 0x18
		::Il2CppArray<::System::UInt32>* BornPositionB; // 0x20
		::System::Boolean IsIce; // 0x28
		::System::Boolean OverrideSpeed; // 0x29
		::System::Single DivideSpeed; // 0x2C
		::System::Single LessDeceleration; // 0x30
		::System::Single Deceleration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D9E2BC0CF699F39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleFieldComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleFieldComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_9D9E2BC0CF699F39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A61FD3697014BDD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleFieldComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleFieldComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_A61FD3697014BDD4_OFFSET))(a1, a2);
		}
	};
}
