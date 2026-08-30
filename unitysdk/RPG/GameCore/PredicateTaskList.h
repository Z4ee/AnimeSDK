#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_831087C3869D39C8_OFFSET UNITYSDK_OFFSET(0x1D7B5850)
#define RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_A0726820766CD54D_OFFSET UNITYSDK_OFFSET(0x1D7B5C60)
#define RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_EA6739731D6A904C_OFFSET UNITYSDK_OFFSET(0x1D7B5890)
#define RPG_GAMECORE_PREDICATETASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B5880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateTaskList_TypeDefinitionIndex = 23541;

	class PredicateTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_831087C3869D39C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_831087C3869D39C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA6739731D6A904C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_EA6739731D6A904C_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_3_A0726820766CD54D(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Int32(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATETASKLIST_METHOD_3_A0726820766CD54D_OFFSET))(a1);
		}
	};
}
