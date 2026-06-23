#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_FCAF801AC482D3B5;

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169E8B00)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x169E8B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass51_0_TypeDefinitionIndex = 58370;

	class UIHollowChessboard3DModelController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Boolean pause; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show3DChessboardEntities_b__0(::Class_5_FCAF801AC482D3B5* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET))(this, chessboard);
		}
	};
}
