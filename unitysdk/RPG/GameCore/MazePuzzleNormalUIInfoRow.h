#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD6CF0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD7390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleNormalUIInfoRow_TypeDefinitionIndex = 13288;

	class MazePuzzleNormalUIInfoRow : public ::System::Object
	{
	public:
		::System::String* Desc03; // 0x10
		::System::String* Desc02; // 0x18
		::System::String* Desc01; // 0x20
		::System::String* Title; // 0x28
		::System::UInt32 NormalModeID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
