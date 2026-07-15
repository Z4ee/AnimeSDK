#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEDYNAMICDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFA97E0)
#define RPG_GAMECORE_ROGUEDIALOGUEDYNAMICDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA9960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueDynamicDisplayRow_TypeDefinitionIndex = 14237;

	class RogueDialogueDynamicDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ContentText; // 0x10
		::System::UInt32 DisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEDYNAMICDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEDYNAMICDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
