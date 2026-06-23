#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo_LineType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F52A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F51E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F52B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_GETLINETYPE_OFFSET UNITYSDK_OFFSET(0x7F50D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F5170)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F5340)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F53B0)

namespace MoleMole::HollowChessboard::ChessboardView
{
	inline static constexpr unsigned int LineInfo_TypeDefinitionIndex = 44057;

	struct alignas(4) LineInfo
	{
		::UnityEngine::Vector3Int Left; // 0x10
		::UnityEngine::Vector3Int Right; // 0x1C

		::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType GetLineType()
		{
			return ((::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_GETLINETYPE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::HollowChessboard::ChessboardView::LineInfo other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_LINEINFO___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
