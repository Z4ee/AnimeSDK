#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTCREATETRIGGER_METHOD_3_1B2FDE72DB8A2E9F_OFFSET UNITYSDK_OFFSET(0x1D4A6560)
#define RPG_GAMECORE_RTCREATETRIGGER_METHOD_3_B43E6777E5182007_OFFSET UNITYSDK_OFFSET(0x1D4A6730)
#define RPG_GAMECORE_RTCREATETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCreateTrigger_TypeDefinitionIndex = 23854;

	class RtCreateTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CustomOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x20
		::System::Boolean IsAttach; // 0x28
		::RPG::GameCore::JsonEnum* Layer; // 0x30
		::RPG::GameCore::RtCollision2DShapeConfig* Shape; // 0x38
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x40
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x48
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x50
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x58
		::RPG::GameCore::PredicateConfig* Predicate; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetEnter; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetExit; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetTrigger; // 0x78
		::RPG::GameCore::DynamicFloat* TriggerInterval; // 0x80
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x88
		::System::String* TriggerName; // 0x90
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCREATETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B2FDE72DB8A2E9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCreateTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCreateTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCREATETRIGGER_METHOD_3_1B2FDE72DB8A2E9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B43E6777E5182007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCreateTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCreateTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCREATETRIGGER_METHOD_3_B43E6777E5182007_OFFSET))(a1, a2);
		}
	};
}
