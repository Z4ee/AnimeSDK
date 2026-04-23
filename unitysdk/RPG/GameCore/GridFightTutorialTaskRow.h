#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DEC80)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DEDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialTaskRow_TypeDefinitionIndex = 12921;

	class GridFightTutorialTaskRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::UInt32 TaskID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTutorialTaskRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTutorialTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
