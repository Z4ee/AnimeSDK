#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A451D0)
#define RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A45350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreAvatarTextmapConfigRow_TypeDefinitionIndex = 13829;

	class PreAvatarTextmapConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PreAvatarID; // 0x10
		::RPG::Client::TextID PreAvatarName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreAvatarTextmapConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreAvatarTextmapConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREAVATARTEXTMAPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
