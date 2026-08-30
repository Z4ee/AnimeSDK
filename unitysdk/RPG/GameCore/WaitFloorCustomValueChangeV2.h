#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_3A63028D40F17F0A_OFFSET UNITYSDK_OFFSET(0x1D6A3040)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_E22C26F4C98EB0FF_OFFSET UNITYSDK_OFFSET(0x1D6A2FF0)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A3030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorCustomValueChangeV2_TypeDefinitionIndex = 20464;

	class WaitFloorCustomValueChangeV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E22C26F4C98EB0FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_E22C26F4C98EB0FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A63028D40F17F0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_3A63028D40F17F0A_OFFSET))(a1, a2);
		}
	};
}
