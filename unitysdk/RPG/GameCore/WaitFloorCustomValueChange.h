#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_METHOD_4_1D0EA36B25BB50CE_OFFSET UNITYSDK_OFFSET(0x1D6A2DF0)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_METHOD_4_8CE828D272E073E3_OFFSET UNITYSDK_OFFSET(0x1D6A2DA0)
#define RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A2DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFloorCustomValueChange_TypeDefinitionIndex = 20457;

	class WaitFloorCustomValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8CE828D272E073E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_METHOD_4_8CE828D272E073E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D0EA36B25BB50CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFLOORCUSTOMVALUECHANGE_METHOD_4_1D0EA36B25BB50CE_OFFSET))(a1, a2);
		}
	};
}
