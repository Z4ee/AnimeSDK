#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18862280)
#define RPG_GAMECORE_DIALOGUEICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18862850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueIconRow_TypeDefinitionIndex = 12414;

	class DialogueIconRow : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* Type; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DialogueIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
