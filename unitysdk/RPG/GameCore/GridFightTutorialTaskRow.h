#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C08F0)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C0A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialTaskRow_TypeDefinitionIndex = 13544;

	class GridFightTutorialTaskRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::UInt32 TaskID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTutorialTaskRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTutorialTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
