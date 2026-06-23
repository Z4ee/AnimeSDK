#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_5_FCAF801AC482D3B5;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x146940A0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__TRYGENCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x146940B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass91_0_TypeDefinitionIndex = 58383;

	class UIHollowChessboard3DModelController___c__DisplayClass91_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x10
		::System::Action_1<::Class_5_FCAF801AC482D3B5*>* buildCallBack; // 0x18
		::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E directType; // 0x20
		::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_A8C63FEEE87BCF3E boardType; // 0x24
		::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGenChessboard_b__0(::Class_5_FCAF801AC482D3B5* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__TRYGENCHESSBOARD_B__0_OFFSET))(this, c);
		}
	};
}
