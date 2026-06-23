#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CHESSBOARDICONANIMITEM_GETSWITCHLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x10CF9840)
#define MOLEMOLE_CONFIG_CHESSBOARDICONANIMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF9AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessBoardIconAnimItem_TypeDefinitionIndex = 77265;

	class ChessBoardIconAnimItem : public ::System::Object
	{
	public:
		::System::Boolean UseVideo; // 0x10
		::System::String* AnimKey; // 0x18
		::System::String* VideoPath; // 0x20
		::System::Boolean NeedSwitch; // 0x28
		::System::String* SwitchKey; // 0x30
		::System::Boolean NeedSwitchOut; // 0x38
		::System::String* SwitchOutKey; // 0x40
		::System::Int32 ScreenIndex; // 0x48
		::MoleMole::Vector2Int RelativePos; // 0x4C
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDICONANIMITEM__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetSwitchListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDICONANIMITEM_GETSWITCHLISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
