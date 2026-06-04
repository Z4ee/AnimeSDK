#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceDirectionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOOKAT_METHOD_3_5AC68DAE2EA01F8B_OFFSET UNITYSDK_OFFSET(0x198AF3B0)
#define RPG_GAMECORE_LOOKAT_METHOD_3_73BAD9060BC701D1_OFFSET UNITYSDK_OFFSET(0x198AF4A0)
#define RPG_GAMECORE_LOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x198AF440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookAt_TypeDefinitionIndex = 21626;

	class LookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::FaceDirectionType TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x28
		::System::Single ToTargetRatio; // 0x30
		::System::Single AngleOffset; // 0x34
		::System::Single Duration; // 0x38
		::RPG::GameCore::TargetEvaluator* SyncYawTargetType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AC68DAE2EA01F8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT_METHOD_3_5AC68DAE2EA01F8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73BAD9060BC701D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKAT_METHOD_3_73BAD9060BC701D1_OFFSET))(a1, a2);
		}
	};
}
