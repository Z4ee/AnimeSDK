#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D028880)
#define RPG_GAMECORE_RETCODEERRORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D028EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetCodeErrorConfigRow_TypeDefinitionIndex = 14071;

	class RetCodeErrorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ErrorID; // 0x10
		::System::Boolean IsPileToastCenter; // 0x14
		::RPG::Client::TextID Text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetCodeErrorConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetCodeErrorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
