#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A13C0)
#define RPG_GAMECORE_ALLOWEDLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A1A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedLanguageRow_TypeDefinitionIndex = 11946;

	class AllowedLanguageRow : public ::System::Object
	{
	public:
		::System::String* Area; // 0x10
		::Il2CppArray<::System::String*>* LanguageList; // 0x18
		::System::String* DefaultLanguage; // 0x20
		::System::Byte Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AllowedLanguageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AllowedLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
