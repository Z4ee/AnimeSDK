#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEMFORLIST_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1743D5C0)
#define MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEMFORLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1743D820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessBoardChessAnimItemForList_TypeDefinitionIndex = 68725;

	class ChessBoardChessAnimItemForList : public ::System::Object
	{
	public:
		::System::String* AnimKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEMFORLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCHESSANIMITEMFORLIST_GETANIMLISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
