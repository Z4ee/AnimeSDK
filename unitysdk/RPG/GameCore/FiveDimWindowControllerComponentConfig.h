#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_METHOD_3_40A0ACA4C9708D0B_OFFSET UNITYSDK_OFFSET(0x1D1096E0)
#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_METHOD_3_6E9CD4921AB86DAA_OFFSET UNITYSDK_OFFSET(0x1D109760)
#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D109730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWindowControllerComponentConfig_TypeDefinitionIndex = 18620;

	class FiveDimWindowControllerComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x10
		::System::UInt32 CameraID; // 0x18
		::System::String* SlotBgPrefabPath; // 0x20
		::RPG::MVector2 WindowSize; // 0x28
		::System::Single WindowShakeAmplitude; // 0x30
		::System::Single WindowShakeFrequency; // 0x34
		::System::String* WindowAnimParamName; // 0x38
		::System::Int32 WindowAnimParamDefaultValue; // 0x40
		::System::Int32 WindowAnimParamHoveringValue; // 0x44
		::System::Int32 WindowAnimParamDraggingValue; // 0x48
		::System::Int32 WindowAnimParamTranslatingValue; // 0x4C
		::System::Int32 WindowAnimParamHintValue; // 0x50
		::System::String* WindowAnimStartHintTrigger; // 0x58
		::Il2CppArray<::System::Int32>* WindowPermCodes; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40A0ACA4C9708D0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowControllerComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowControllerComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_METHOD_3_40A0ACA4C9708D0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E9CD4921AB86DAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowControllerComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowControllerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_METHOD_3_6E9CD4921AB86DAA_OFFSET))(a1, a2);
		}
	};
}
