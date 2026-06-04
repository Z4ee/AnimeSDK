#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_METHOD_3_0F4B2A1DCFA15956_OFFSET UNITYSDK_OFFSET(0x197367C0)
#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_METHOD_3_5213B6771E42A63C_OFFSET UNITYSDK_OFFSET(0x19736830)
#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19736810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConveyorConfig_TypeDefinitionIndex = 17688;

	class FiveDimConveyorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsConveyor; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::String* ActiveRIState; // 0x30
		::RPG::GameCore::FiveDimOrthoDirection Direction; // 0x38
		::System::Boolean OverrideSpeed; // 0x3C
		::System::Single HorizontalSpeed; // 0x40
		::System::Single VerticalSpeed; // 0x44
		::System::Boolean SendEventOnInit; // 0x48
		::RPG::GameCore::LittleGameEvent* OnConveyor; // 0x50
		::RPG::GameCore::LittleGameEvent* LeaveConveyor; // 0x58
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F4B2A1DCFA15956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConveyorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConveyorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_METHOD_3_0F4B2A1DCFA15956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5213B6771E42A63C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConveyorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConveyorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_METHOD_3_5213B6771E42A63C_OFFSET))(a1, a2);
		}
	};
}
