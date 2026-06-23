#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole { class TextureSheetData; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CREATECHANGELAYERTEMPCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x16917AF0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16917AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass59_0_TypeDefinitionIndex = 78305;

	class UIHollowMainPageController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::TextureSheetData* textureSheetData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateChangeLayerTempChessboard_b__0(::Class_5_A6F8D19602712D95* uiHollowChessPiece3DModelController)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS59_0__CREATECHANGELAYERTEMPCHESSBOARD_B__0_OFFSET))(this, uiHollowChessPiece3DModelController);
		}
	};
}
