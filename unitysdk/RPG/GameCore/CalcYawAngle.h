#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CALCYAWANGLE_METHOD_3_5943AA44D46F100E_OFFSET UNITYSDK_OFFSET(0x1D1061D0)
#define RPG_GAMECORE_CALCYAWANGLE_METHOD_3_B7C73D7C6C5B4047_OFFSET UNITYSDK_OFFSET(0x1D106190)
#define RPG_GAMECORE_CALCYAWANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1061C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcYawAngle_TypeDefinitionIndex = 20008;

	class CalcYawAngle : public ::RPG::GameCore::TaskConfig
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCYAWANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7C73D7C6C5B4047(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcYawAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcYawAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCYAWANGLE_METHOD_3_B7C73D7C6C5B4047_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5943AA44D46F100E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CalcYawAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CalcYawAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCYAWANGLE_METHOD_3_5943AA44D46F100E_OFFSET))(a1, a2);
		}
	};
}
