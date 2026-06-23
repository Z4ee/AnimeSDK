#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EF0B7B770198FEB2;
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174ECC90)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS45_0__INITCURCHAPTERPIECES_B__0_OFFSET UNITYSDK_OFFSET(0x174ECCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController___c__DisplayClass45_0_TypeDefinitionIndex = 52458;

	class UINewsStandPuzzleGameWidgetController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_2_EF0B7B770198FEB2* fragCfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitCurChapterPieces_b__0(::MoleMole::UINewsStandPuzzlePieceWidgetController* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS45_0__INITCURCHAPTERPIECES_B__0_OFFSET))(this, p);
		}
	};
}
