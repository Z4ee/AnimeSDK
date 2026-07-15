#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTEREYECTRLCONFIG_METHOD_2_9971E5FA12C1D8E2_OFFSET UNITYSDK_OFFSET(0x1B723110)
#define RPG_GAMECORE_CHARACTEREYECTRLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7234A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeCtrlConfig_TypeDefinitionIndex = 16750;

	class CharacterEyeCtrlConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Eye_L_Rotation; // 0x10
		::RPG::MVector3 Eye_R_Rotation; // 0x1C
		::RPG::MVector3 EyeEnd_L_Scale; // 0x28
		::RPG::MVector3 EyeEnd_R_Scale; // 0x34
		::RPG::MVector3 EyeEnd_L_01_Position; // 0x40
		::RPG::MVector3 EyeEnd_R_01_Position; // 0x4C
		::RPG::MVector3 EyeEnd_L_01_Rotation; // 0x58
		::RPG::MVector3 EyeEnd_R_01_Rotation; // 0x64
		::RPG::MVector3 EyeEnd_L_01_Scale; // 0x70
		::RPG::MVector3 EyeEnd_R_01_Scale; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9971E5FA12C1D8E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEyeCtrlConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEyeCtrlConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLCONFIG_METHOD_2_9971E5FA12C1D8E2_OFFSET))(a1, a2);
		}
	};
}
