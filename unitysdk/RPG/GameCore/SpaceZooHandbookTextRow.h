#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0AB210)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AB8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooHandbookTextRow_TypeDefinitionIndex = 12300;

	class SpaceZooHandbookTextRow : public ::System::Object
	{
	public:
		::System::String* UITextID; // 0x10
		::System::Boolean IsParam; // 0x18
		::System::UInt32 SpecialCatID; // 0x1C
		::System::UInt32 Param1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooHandbookTextRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooHandbookTextRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
