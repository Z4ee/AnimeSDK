#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"
#include "unitysdk/RPG/GameCore/TimeRewindObjectCameraMode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_METHOD_3_BFBD4B00EAEE8C86_OFFSET UNITYSDK_OFFSET(0x18A59210)
#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_METHOD_3_C843853EA20F1D7B_OFFSET UNITYSDK_OFFSET(0x18A58C00)
#define RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A58BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropTimeRewindParameter_TypeDefinitionIndex = 16374;

	class LevelPropTimeRewindParameter : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::RPG::GameCore::TimeRewindObjectCameraMode Mode; // 0x10
		::System::UInt32 CameraAnchorID; // 0x14
		::System::UInt32 ResetPlayerAnchorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFBD4B00EAEE8C86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropTimeRewindParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropTimeRewindParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_METHOD_3_BFBD4B00EAEE8C86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C843853EA20F1D7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropTimeRewindParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropTimeRewindParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPTIMEREWINDPARAMETER_METHOD_3_C843853EA20F1D7B_OFFSET))(a1, a2);
		}
	};
}
