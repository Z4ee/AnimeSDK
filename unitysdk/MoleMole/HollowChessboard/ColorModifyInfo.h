#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/PieceColorModifyRequest_ColorModifyRequestType.h"
#include "unitysdk/MoleMole/HollowChessboard/RangeMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ColorModifyInfo_TypeDefinitionIndex = 75639;

	struct alignas(4) ColorModifyInfo
	{
		::MoleMole::HollowChessboard::RangeMask RangeMask; // 0x10
		::System::Nullable_1<::UnityEngine::Color> ModifyColor; // 0x14
		::System::Nullable_1<::UnityEngine::Vector4> SccInfo; // 0x28
		::MoleMole::HollowChessboard::PieceColorModifyRequest_ColorModifyRequestType RequestType; // 0x3C
	};
}
