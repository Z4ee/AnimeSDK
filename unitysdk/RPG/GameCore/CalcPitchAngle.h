#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_A5F3D5A683C9F115_OFFSET UNITYSDK_OFFSET(0x195F2850)
#define RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_D18007096DDFE63B_OFFSET UNITYSDK_OFFSET(0x195F28D0)
#define RPG_GAMECORE_CALCPITCHANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x195F28A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcPitchAngle_TypeDefinitionIndex = 19107;

	class CalcPitchAngle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTarget; // 0x18
		::System::String* FromAttachPoint; // 0x20
		::RPG::MVector3 FromOffset; // 0x28
		::RPG::GameCore::TargetEvaluator* ToTarget; // 0x38
		::System::String* ToAttachPoint; // 0x40
		::RPG::MVector3 ToOffset; // 0x48
		::System::String* DynamicKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5F3D5A683C9F115(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcPitchAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcPitchAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_A5F3D5A683C9F115_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D18007096DDFE63B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcPitchAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_D18007096DDFE63B_OFFSET))(a1, a2);
		}
	};
}
