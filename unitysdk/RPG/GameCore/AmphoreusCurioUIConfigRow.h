#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A3820)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A40A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AmphoreusCurioUIConfigRow_TypeDefinitionIndex = 11410;

	class AmphoreusCurioUIConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x18
		::Il2CppArray<::RPG::Client::TextID>* TextmapIDList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 Tag; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID NameAfter; // 0x40
		::RPG::Client::TextID Desc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AmphoreusCurioUIConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AmphoreusCurioUIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
