#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TValueUISpecialNum_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A35F330)
#define MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35F2D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ListCellUISpecialNum_TypeDefinitionIndex = 86869;

	class ListCellUISpecialNum : public ::MoleMole::Config::TValueUISpecialNum_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetValue(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::System::String* tmpOverrideSpecialName, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& tmpValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM_GETVALUE_OFFSET))(this, uiSpecialNumGroup, tmpOverrideSpecialName, tmpValue);
		}
	};
}
