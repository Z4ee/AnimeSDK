#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESGAMECONFIG_METHOD_3_71567336DD5FB76E_OFFSET UNITYSDK_OFFSET(0x19629AF0)
#define RPG_GAMECORE_CHENLINGFESGAMECONFIG_METHOD_3_CEBD39260D75E547_OFFSET UNITYSDK_OFFSET(0x19629B30)
#define RPG_GAMECORE_CHENLINGFESGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19629B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesGameConfig_TypeDefinitionIndex = 17521;

	class ChenLingFesGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single VisitorJumpDuration; // 0x18
		::System::UInt32 SummonVisitorID; // 0x1C
		::System::UInt32 LoopLevelID; // 0x20
		::System::UInt32 FeverActiveValue; // 0x24
		::Il2CppArray<::System::UInt32>* FeverAddValue; // 0x28
		::System::UInt32 FeverLevelAbilityID; // 0x30
		::RPG::GameCore::FloatCurve* ChenLingMoveCurve; // 0x38
		::System::Boolean AutoAbsorbSwitch; // 0x40
		::RPG::GameCore::ChenLingFesVCameraConfig* BuildCameraConfig16x9; // 0x48
		::RPG::GameCore::ChenLingFesVCameraConfig* GameCameraConfig16x9; // 0x50
		::RPG::GameCore::ChenLingFesVCameraConfig* BuildCameraConfig4x3; // 0x58
		::RPG::GameCore::ChenLingFesVCameraConfig* GameCameraConfig4x3; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71567336DD5FB76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG_METHOD_3_71567336DD5FB76E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEBD39260D75E547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG_METHOD_3_CEBD39260D75E547_OFFSET))(a1, a2);
		}
	};
}
