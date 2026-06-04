#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197CDB50)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197CE230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideSubTypeDataConfigRow_TypeDefinitionIndex = 12742;

	class GameplayGuideSubTypeDataConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemListForType; // 0x10
		::System::String* TabIconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 SubTypeID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
