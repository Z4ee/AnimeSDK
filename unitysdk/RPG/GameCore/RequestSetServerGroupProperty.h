#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_METHOD_3_1647F333B3856DE3_OFFSET UNITYSDK_OFFSET(0x19ACD2F0)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_METHOD_3_64BFA5A850033930_OFFSET UNITYSDK_OFFSET(0x19ACD370)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACD340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestSetServerGroupProperty_TypeDefinitionIndex = 19587;

	class RequestSetServerGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1647F333B3856DE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestSetServerGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestSetServerGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_METHOD_3_1647F333B3856DE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64BFA5A850033930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_METHOD_3_64BFA5A850033930_OFFSET))(a1, a2);
		}
	};
}
