#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_33EA27A25F076E07;
class Class_3_48A3D3A34C52331D_16;
namespace MoleMole { class UILineupSelectContext___c__DisplayClass63_0; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184BBF00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x184BBF10)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET UNITYSDK_OFFSET(0x184BBF70)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass63_1_TypeDefinitionIndex = 52590;

	class UILineupSelectContext___c__DisplayClass63_1 : public ::System::Object
	{
	public:
		::Class_2_33EA27A25F076E07* mainStoryModel; // 0x10
		::Class_1_E081FCEC8F87505A* data; // 0x18
		::MoleMole::UILineupSelectContext___c__DisplayClass63_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__1(::Class_3_48A3D3A34C52331D_16* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_16*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET))(this, ret);
		}

		::System::Void _SetArchiveBattleQuestContext_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET))(this);
		}
	};
}
