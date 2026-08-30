#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_METHOD_3_4C0663F4F1A0F0E1_OFFSET UNITYSDK_OFFSET(0x1D4E5910)
#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_METHOD_3_8890CDB15035954B_OFFSET UNITYSDK_OFFSET(0x1D4E5990)
#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E5960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharLightToEntityDir_TypeDefinitionIndex = 21626;

	class SetCharLightToEntityDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 RotationOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C0663F4F1A0F0E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharLightToEntityDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharLightToEntityDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_METHOD_3_4C0663F4F1A0F0E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8890CDB15035954B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharLightToEntityDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharLightToEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_METHOD_3_8890CDB15035954B_OFFSET))(a1, a2);
		}
	};
}
