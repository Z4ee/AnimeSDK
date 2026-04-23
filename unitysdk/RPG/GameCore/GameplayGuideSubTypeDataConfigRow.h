#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18994A70)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18995130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideSubTypeDataConfigRow_TypeDefinitionIndex = 12652;

	class GameplayGuideSubTypeDataConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ItemListForType; // 0x18
		::System::UInt32 SubTypeID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
