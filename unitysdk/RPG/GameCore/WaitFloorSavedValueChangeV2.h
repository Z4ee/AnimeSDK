#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_METHOD_4_3E56CBFB31CB9E6F_OFFSET UNITYSDK_OFFSET(0x19E564E0)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_METHOD_4_E0735C0821E6B307_OFFSET UNITYSDK_OFFSET(0x19E56400)
#define RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19E56480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorSavedValueChangeV2_TypeDefinitionIndex = 19565;

	class WaitFloorSavedValueChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0735C0821E6B307(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_METHOD_4_E0735C0821E6B307_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E56CBFB31CB9E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORSAVEDVALUECHANGEV2_METHOD_4_3E56CBFB31CB9E6F_OFFSET))(a1, a2);
		}
	};
}
