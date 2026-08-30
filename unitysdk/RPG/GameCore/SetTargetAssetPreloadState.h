#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_METHOD_3_59E466552D15230E_OFFSET UNITYSDK_OFFSET(0x1D510070)
#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_METHOD_3_748C7C2133C7497D_OFFSET UNITYSDK_OFFSET(0x1D5101B0)
#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D510120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAssetPreloadState_TypeDefinitionIndex = 22550;

	class SetTargetAssetPreloadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Preload; // 0x20
		::System::Boolean IsSync; // 0x21
		::Il2CppArray<::System::String*>* UnloadList; // 0x28
		::Il2CppArray<::System::String*>* LoadList; // 0x30
		::RPG::GameCore::DynamicFloat* TargetCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59E466552D15230E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAssetPreloadState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAssetPreloadState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_METHOD_3_59E466552D15230E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_748C7C2133C7497D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_METHOD_3_748C7C2133C7497D_OFFSET))(a1, a2);
		}
	};
}
