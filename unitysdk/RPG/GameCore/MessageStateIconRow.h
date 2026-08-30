#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A24D0)
#define RPG_GAMECORE_MESSAGESTATEICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A2AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateIconRow_TypeDefinitionIndex = 14318;

	class MessageStateIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::MessageStateType ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageStateIconRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageStateIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
