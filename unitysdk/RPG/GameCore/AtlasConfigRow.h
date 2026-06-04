#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19484A50)
#define RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19484BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AtlasConfigRow_TypeDefinitionIndex = 12067;

	class AtlasConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AtlasConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AtlasConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
