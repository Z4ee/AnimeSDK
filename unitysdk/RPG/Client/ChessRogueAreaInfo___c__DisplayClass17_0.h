#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaDataItem; }

#define RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2E0B0)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS17_0__GETACCESSIBLEAREADATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x1CB2F260)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo___c__DisplayClass17_0_TypeDefinitionIndex = 66908;

	class ChessRogueAreaInfo___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAccessibleAreaDataList_b__0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS17_0__GETACCESSIBLEAREADATALIST_B__0_OFFSET))(this, a1);
		}
	};
}
