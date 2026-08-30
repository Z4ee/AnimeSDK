#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_98BB7C764B8B59D3_OFFSET UNITYSDK_OFFSET(0x1D60B2E0)
#define RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_E29E93EEC65BCF74_OFFSET UNITYSDK_OFFSET(0x1D60B320)
#define RPG_GAMECORE_TRIGGERUINOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60B310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotify_TypeDefinitionIndex = 22667;

	class TriggerUINotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::Client::TextID TextID; // 0x28
		::Il2CppArray<::System::String*>* StringParams; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueParams; // 0x40
		::System::Boolean WaitCallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98BB7C764B8B59D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_98BB7C764B8B59D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E29E93EEC65BCF74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_E29E93EEC65BCF74_OFFSET))(a1, a2);
		}
	};
}
