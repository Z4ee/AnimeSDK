#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEM_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1A33CC90)
#define MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33CEF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessBoardChessAnimItem_TypeDefinitionIndex = 48532;

	class ChessBoardChessAnimItem : public ::System::Object
	{
	public:
		::System::String* AnimKey; // 0x10
		::MoleMole::Vector2Int RelativePos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEM__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEM_GETANIMLISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
