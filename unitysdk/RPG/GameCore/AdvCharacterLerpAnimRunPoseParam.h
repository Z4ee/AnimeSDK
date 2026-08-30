#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_METHOD_3_9E2CA1414DBEED5D_OFFSET UNITYSDK_OFFSET(0x1CDC3F20)
#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_METHOD_3_CD094E279CFDF2A8_OFFSET UNITYSDK_OFFSET(0x1CDC3FC0)
#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC3F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterLerpAnimRunPoseParam_TypeDefinitionIndex = 20369;

	class AdvCharacterLerpAnimRunPoseParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20
		::System::Single TargetValue; // 0x28
		::System::Single LerpTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E2CA1414DBEED5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_METHOD_3_9E2CA1414DBEED5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD094E279CFDF2A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_METHOD_3_CD094E279CFDF2A8_OFFSET))(a1, a2);
		}
	};
}
