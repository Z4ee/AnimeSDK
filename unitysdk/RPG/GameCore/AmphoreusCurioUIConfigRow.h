#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19478230)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19478AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AmphoreusCurioUIConfigRow_TypeDefinitionIndex = 11455;

	class AmphoreusCurioUIConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* TextmapIDList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID NameAfter; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 Tag; // 0x58
		::System::UInt32 ID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AmphoreusCurioUIConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AmphoreusCurioUIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
