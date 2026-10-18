#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_40BF37BBC7D9CD9E_OFFSET UNITYSDK_OFFSET(0x1D5547C0)
#define RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_49BC42DD4F93F504_OFFSET UNITYSDK_OFFSET(0x1D554780)
#define RPG_GAMECORE_CALCPITCHANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5547B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcPitchAngle_TypeDefinitionIndex = 20244;

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

		static ::System::Void Method_3_49BC42DD4F93F504(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcPitchAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcPitchAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_49BC42DD4F93F504_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40BF37BBC7D9CD9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcPitchAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_METHOD_3_40BF37BBC7D9CD9E_OFFSET))(a1, a2);
		}
	};
}
