#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LIMITTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988DFD0)
#define RPG_GAMECORE_LIMITTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1988E9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitTypeConfigRow_TypeDefinitionIndex = 14365;

	class LimitTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID LimitTypeDetailDesc; // 0x10
		::RPG::Client::TextID LimitTypeDesc; // 0x20
		::RPG::GameCore::LimitType LimitType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LimitTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LimitTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
