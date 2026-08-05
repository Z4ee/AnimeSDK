#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A09FD06BA66A78D7;

#define MOLEMOLE_UICHATEMOJIITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A643790)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatEmojiItemWidgetController_Context_TypeDefinitionIndex = 46533;

	class UIChatEmojiItemWidgetController_Context : public ::System::Object
	{
	public:
		::Class_1_A09FD06BA66A78D7* Data; // 0x10
		::System::Boolean ShowAsFav; // 0x18
		::System::Int32 FavListIndex; // 0x1C

		::System::Void _ctor(::Class_1_A09FD06BA66A78D7* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A09FD06BA66A78D7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJIITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, data);
		}
	};
}
