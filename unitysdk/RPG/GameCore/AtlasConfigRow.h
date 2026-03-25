#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F898E0)
#define RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AtlasConfigRow_TypeDefinitionIndex = 11563;

	class AtlasConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AtlasConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AtlasConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
