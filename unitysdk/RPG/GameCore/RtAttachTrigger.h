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

#define RPG_GAMECORE_RTATTACHTRIGGER_METHOD_3_6BFFC3498DFFAA0F_OFFSET UNITYSDK_OFFSET(0x1D496250)
#define RPG_GAMECORE_RTATTACHTRIGGER_METHOD_3_D608554727096ABA_OFFSET UNITYSDK_OFFSET(0x1D496350)
#define RPG_GAMECORE_RTATTACHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D496290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAttachTrigger_TypeDefinitionIndex = 23855;

	class RtAttachTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x18
		::RPG::GameCore::JsonEnum* Layer; // 0x20
		::RPG::GameCore::RtCollision2DShapeConfig* Shape; // 0x28
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x30
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x38
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x40
		::RPG::GameCore::PredicateConfig* Predicate; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetEnter; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetExit; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetTrigger; // 0x60
		::RPG::GameCore::DynamicFloat* TriggerInterval; // 0x68
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x70
		::System::String* TriggerName; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BFFC3498DFFAA0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAttachTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAttachTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER_METHOD_3_6BFFC3498DFFAA0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D608554727096ABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAttachTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER_METHOD_3_D608554727096ABA_OFFSET))(a1, a2);
		}
	};
}
