#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITENTITYEVENTV2_METHOD_4_5C2FF6FE759F279F_OFFSET UNITYSDK_OFFSET(0x178F8220)
#define RPG_GAMECORE_WAITENTITYEVENTV2_METHOD_4_E78BB0D8423A99E9_OFFSET UNITYSDK_OFFSET(0x178F8140)
#define RPG_GAMECORE_WAITENTITYEVENTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x178F81C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityEventV2_TypeDefinitionIndex = 19040;

	class WaitEntityEventV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E78BB0D8423A99E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityEventV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityEventV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2_METHOD_4_E78BB0D8423A99E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C2FF6FE759F279F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2_METHOD_4_5C2FF6FE759F279F_OFFSET))(a1, a2);
		}
	};
}
