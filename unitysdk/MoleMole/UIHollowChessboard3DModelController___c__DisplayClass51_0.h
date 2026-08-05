#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186E4620)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x186E4630)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass51_0_TypeDefinitionIndex = 63283;

	class UIHollowChessboard3DModelController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Boolean pause; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show3DChessboardEntities_b__0(::Class_5_DCFF91E03A93C03C* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET))(this, chessboard);
		}
	};
}
