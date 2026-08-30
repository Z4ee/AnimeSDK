#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGESECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A1940)
#define RPG_GAMECORE_MESSAGESECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A1B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSectionRow_TypeDefinitionIndex = 14296;

	class MessageSectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StartMessageItemIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 MainMissionLink; // 0x1C
		::System::Boolean IsPerformMessage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageSectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageSectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
