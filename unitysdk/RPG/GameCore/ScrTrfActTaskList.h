#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_8D6BA0981AC5A4D8_OFFSET UNITYSDK_OFFSET(0x1DB49710)
#define RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_9293E3121F88C08B_OFFSET UNITYSDK_OFFSET(0x1DB49750)
#define RPG_GAMECORE_SCRTRFACTTASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScrTrfActTaskList_TypeDefinitionIndex = 20622;

	class ScrTrfActTaskList : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D6BA0981AC5A4D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_8D6BA0981AC5A4D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9293E3121F88C08B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_9293E3121F88C08B_OFFSET))(a1, a2);
		}
	};
}
