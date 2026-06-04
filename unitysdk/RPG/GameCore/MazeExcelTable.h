#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_MAZEEXCELTABLE_SAVE_OFFSET UNITYSDK_OFFSET(0x198FF190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeExcelTable_TypeDefinitionIndex = 14700;

	class MazeExcelTable : public ::System::Object
	{
	public:
		static ::System::Void Save(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEEXCELTABLE_SAVE_OFFSET))(a1);
		}
	};
}
