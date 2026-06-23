#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_4F9417780723166C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWITEMOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167C4D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemOptionsUpGradeControllerContext_TypeDefinitionIndex = 51118;

	class UIHollowItemOptionsUpGradeControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* ItemDatas; // 0x28
		::System::Action* OnCancel; // 0x30
		::System::Action* OnConfirm; // 0x38
		::System::Boolean forbidConfirm; // 0x40
		::System::Int32 toUpdateIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
