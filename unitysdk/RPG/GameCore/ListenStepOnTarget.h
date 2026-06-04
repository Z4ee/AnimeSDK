#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LISTENSTEPONTARGET_METHOD_3_12739644FD22BCBE_OFFSET UNITYSDK_OFFSET(0x19892100)
#define RPG_GAMECORE_LISTENSTEPONTARGET_METHOD_3_6EC62F7FB2750A12_OFFSET UNITYSDK_OFFSET(0x19892180)
#define RPG_GAMECORE_LISTENSTEPONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19892150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenStepOnTarget_TypeDefinitionIndex = 19502;

	class ListenStepOnTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean FilterFollowUnit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetStepOn; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNoTargetStepOn; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterTarget; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveTarget; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12739644FD22BCBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenStepOnTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenStepOnTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET_METHOD_3_12739644FD22BCBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6EC62F7FB2750A12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenStepOnTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenStepOnTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET_METHOD_3_6EC62F7FB2750A12_OFFSET))(a1, a2);
		}
	};
}
