#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEBASICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D266B70)
#define RPG_GAMECORE_MATCHTHREEBASICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D267160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeBasicRow_TypeDefinitionIndex = 11888;

	class MatchThreeBasicRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 StyleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeBasicRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeBasicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBASICROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
