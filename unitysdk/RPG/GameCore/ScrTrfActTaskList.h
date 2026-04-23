#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_011E0242151CCCBD_OFFSET UNITYSDK_OFFSET(0x18DFFF70)
#define RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_A8741B4E3138128E_OFFSET UNITYSDK_OFFSET(0x18DFFFB0)
#define RPG_GAMECORE_SCRTRFACTTASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFFFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScrTrfActTaskList_TypeDefinitionIndex = 19846;

	class ScrTrfActTaskList : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_011E0242151CCCBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_011E0242151CCCBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8741B4E3138128E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_METHOD_3_A8741B4E3138128E_OFFSET))(a1, a2);
		}
	};
}
