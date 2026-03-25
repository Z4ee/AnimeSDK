#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175AC140)
#define RPG_GAMECORE_RETCODEERRORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175AC7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetCodeErrorConfigRow_TypeDefinitionIndex = 13382;

	class RetCodeErrorConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Text; // 0x10
		::System::UInt32 ErrorID; // 0x20
		::System::Boolean IsPileToastCenter; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RetCodeErrorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetCodeErrorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
