#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_208CC9941471731A_639;
class Class_2_208CC9941471731A_732;
namespace MoleMole { class UIVRBossBattleInfoPageController___c__DisplayClass48_1; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11C1CC70)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_2__GOSINGLEPLAYREAL_B__3_OFFSET UNITYSDK_OFFSET(0x11C1CC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass48_2_TypeDefinitionIndex = 44581;

	class UIVRBossBattleInfoPageController___c__DisplayClass48_2 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_732* questData; // 0x10
		::Class_2_208CC9941471731A_639* difficulty; // 0x18
		::MoleMole::UIVRBossBattleInfoPageController___c__DisplayClass48_1* CS___8__locals2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_2__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__3(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS48_2__GOSINGLEPLAYREAL_B__3_OFFSET))(this, data);
		}
	};
}
