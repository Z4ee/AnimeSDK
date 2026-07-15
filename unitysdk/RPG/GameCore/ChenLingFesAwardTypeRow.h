#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAwardTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C383630)
#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C383810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAwardTypeRow_TypeDefinitionIndex = 10718;

	class ChenLingFesAwardTypeRow : public ::System::Object
	{
	public:
		::System::String* AwardIconPath; // 0x10
		::RPG::Client::TextID AwardDesc; // 0x18
		::RPG::GameCore::ChenLingFesAwardTypeEnum AwardType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesAwardTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesAwardTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
