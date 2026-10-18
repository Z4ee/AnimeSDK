#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }

#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_023597ABCC9ECC09_OFFSET UNITYSDK_OFFSET(0x1D80F800)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_97F9B72575AF0ED6_OFFSET UNITYSDK_OFFSET(0x1D80F860)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleFieldComponentConfig_TypeDefinitionIndex = 18914;

	class MarbleFieldComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Length; // 0x10
		::System::Single Width; // 0x14
		::Il2CppArray<::System::UInt32>* BornPositionA; // 0x18
		::Il2CppArray<::System::UInt32>* BornPositionB; // 0x20
		::Il2CppArray<::System::UInt32>* BornPositionACoopBoss; // 0x28
		::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* BornPositionBCoopBoss; // 0x30
		::System::Boolean IsIce; // 0x38
		::System::Boolean OverrideSpeed; // 0x39
		::System::Single DivideSpeed; // 0x3C
		::System::Single LessDeceleration; // 0x40
		::System::Single Deceleration; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_023597ABCC9ECC09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleFieldComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleFieldComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_023597ABCC9ECC09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97F9B72575AF0ED6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleFieldComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleFieldComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_METHOD_3_97F9B72575AF0ED6_OFFSET))(a1, a2);
		}
	};
}
