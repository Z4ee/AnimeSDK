#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_WAITFORWITHTASKLIST_METHOD_3_2BB7368F11A27240_OFFSET UNITYSDK_OFFSET(0x1DEB90C0)
#define RPG_GAMECORE_WAITFORWITHTASKLIST_METHOD_3_B5EB0EE7547A56D7_OFFSET UNITYSDK_OFFSET(0x1DEB9100)
#define RPG_GAMECORE_WAITFORWITHTASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB90F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForWithTaskList_TypeDefinitionIndex = 23520;

	class WaitForWithTaskList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskListClientOnly; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BB7368F11A27240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForWithTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForWithTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST_METHOD_3_2BB7368F11A27240_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5EB0EE7547A56D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForWithTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForWithTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHTASKLIST_METHOD_3_B5EB0EE7547A56D7_OFFSET))(a1, a2);
		}
	};
}
