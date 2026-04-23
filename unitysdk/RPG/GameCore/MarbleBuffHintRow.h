#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBUFFHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A96710)
#define RPG_GAMECORE_MARBLEBUFFHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A96890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffHintRow_TypeDefinitionIndex = 11329;

	class MarbleBuffHintRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID HintText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleBuffHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
