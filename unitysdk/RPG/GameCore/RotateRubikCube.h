#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ROTATERUBIKCUBE_METHOD_3_86692DEE3E8759B0_OFFSET UNITYSDK_OFFSET(0x19BD5AB0)
#define RPG_GAMECORE_ROTATERUBIKCUBE_METHOD_3_ADB4E86F69813BC2_OFFSET UNITYSDK_OFFSET(0x19BD5A30)
#define RPG_GAMECORE_ROTATERUBIKCUBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD5A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotateRubikCube_TypeDefinitionIndex = 20919;

	class RotateRubikCube : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RubikRotDirection RotDirection; // 0x20
		::RPG::GameCore::DynamicString* ParamRotDirection; // 0x28
		::System::Boolean IsClockwise; // 0x30
		::System::String* CubeName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ADB4E86F69813BC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotateRubikCube*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotateRubikCube*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE_METHOD_3_ADB4E86F69813BC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86692DEE3E8759B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotateRubikCube* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotateRubikCube*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE_METHOD_3_86692DEE3E8759B0_OFFSET))(a1, a2);
		}
	};
}
