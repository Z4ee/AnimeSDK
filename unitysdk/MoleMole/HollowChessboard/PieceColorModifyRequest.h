#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceColorModifyRequest_TypeDefinitionIndex = 82282;

	struct alignas(8) PieceColorModifyRequest
	{
		::MoleMole::HollowChessboard::ColorModifyInfo ColorModifyInfoData; // 0x10
		::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> BlendData; // 0x40
	};
}
