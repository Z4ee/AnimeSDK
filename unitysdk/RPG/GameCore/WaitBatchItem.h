#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WaitBatchItemType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITBATCHITEM_METHOD_2_61FBA0D5F412032C_OFFSET UNITYSDK_OFFSET(0x190F93E0)
#define RPG_GAMECORE_WAITBATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatchItem_TypeDefinitionIndex = 22746;

	class WaitBatchItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::WaitBatchItemType WaitType; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WaitTask; // 0x18
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Boolean ResetWhenTaskBegin; // 0x28
		::System::String* EventType; // 0x30
		::System::String* NotifyType; // 0x38
		::System::Boolean WaitOwnerOnly; // 0x40
		::RPG::GameCore::PredicateConfig* Condition; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTrigger; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCHITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61FBA0D5F412032C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBatchItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCHITEM_METHOD_2_61FBA0D5F412032C_OFFSET))(a1, a2);
		}
	};
}
