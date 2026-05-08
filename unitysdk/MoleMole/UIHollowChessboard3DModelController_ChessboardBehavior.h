#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E8AD0E270DD5616_1;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA40E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_ChessboardBehavior_TypeDefinitionIndex = 44034;

	class UIHollowChessboard3DModelController_ChessboardBehavior : public ::System::Object
	{
	public:
		::Class_1_3E8AD0E270DD5616_1* args; // 0x10
		::System::Action_1<::Class_1_3E8AD0E270DD5616_1*>* handler; // 0x18

		::System::Void _ctor(::Class_1_3E8AD0E270DD5616_1* args, ::System::Action_1<::Class_1_3E8AD0E270DD5616_1*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E8AD0E270DD5616_1*, ::System::Action_1<::Class_1_3E8AD0E270DD5616_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET))(this, args, handler);
		}
	};
}
