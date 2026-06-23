#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5DF25B7A40A1031E;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x834240)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigActionNew_RuntimeData_TypeDefinitionIndex = 80758;

	struct alignas(8) TextureSheetConfigActionNew_RuntimeData
	{
		::MoleMole::HollowChessboard::RenderDataHandle animHandle; // 0x10
		::Class_2_5DF25B7A40A1031E* _actionContext; // 0x20
		::System::String* finalTextureSheetKey; // 0x28

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTIONNEW_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
