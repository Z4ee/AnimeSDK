#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_101;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E83870)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x16E83A30)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__4_OFFSET UNITYSDK_OFFSET(0x16E84610)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONGETSELECTROLECONTEXT_2_OFFSET UNITYSDK_OFFSET(0x16E84050)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_3_OFFSET UNITYSDK_OFFSET(0x16E843F0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONSHOWDETAILINFO_0_OFFSET UNITYSDK_OFFSET(0x16E83880)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass59_0_TypeDefinitionIndex = 60178;

	class UILineupSelectContext___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_101* config; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* effectList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* conditionList; // 0x20
		::System::Int32 activityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActivityBattleQuestContext_g__OnShowDetailInfo_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONSHOWDETAILINFO_0_OFFSET))(this);
		}

		::System::Boolean _SetActivityBattleQuestContext_b__1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__1_OFFSET))(this, data);
		}

		::MoleMole::UIRoleSelectPageContext* _SetActivityBattleQuestContext_g__OnGetSelectRoleContext_2(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONGETSELECTROLECONTEXT_2_OFFSET))(this, selectIndex, currentSelected);
		}

		::MoleMole::UIActivePropsWindowContext* _SetActivityBattleQuestContext_g__OnPostGetBuddySelectContext_3(::MoleMole::UIActivePropsWindowContext* _context)
		{
			return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_3_OFFSET))(this, _context);
		}

		::System::Void _SetActivityBattleQuestContext_b__4(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__4_OFFSET))(this, data);
		}
	};
}
