#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D9BB0)
#define RPG_GAMECORE_MESSAGESTATEICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173DA190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateIconRow_TypeDefinitionIndex = 13219;

	class MessageStateIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::MessageStateType ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageStateIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageStateIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
