#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_A59E5484C2D77690_OFFSET UNITYSDK_OFFSET(0x178F96C0)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_D36FD4F723D3457E_OFFSET UNITYSDK_OFFSET(0x178F95E0)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x178F9660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorCustomValueChangeV2_TypeDefinitionIndex = 19021;

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

		static ::System::Void Method_4_D36FD4F723D3457E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_D36FD4F723D3457E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A59E5484C2D77690(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGEV2_METHOD_4_A59E5484C2D77690_OFFSET))(a1, a2);
		}
	};
}
