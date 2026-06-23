#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E8AD0E270DD5616;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_ChessboardBehavior_TypeDefinitionIndex = 58376;

	class UIHollowChessboard3DModelController_ChessboardBehavior : public ::System::Object
	{
	public:
		::Class_1_3E8AD0E270DD5616* args; // 0x10
		::System::Action_1<::Class_1_3E8AD0E270DD5616*>* handler; // 0x18

		::System::Void _ctor(::Class_1_3E8AD0E270DD5616* args, ::System::Action_1<::Class_1_3E8AD0E270DD5616*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E8AD0E270DD5616*, ::System::Action_1<::Class_1_3E8AD0E270DD5616*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET))(this, args, handler);
		}
	};
}
