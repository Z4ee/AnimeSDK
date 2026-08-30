#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEPIECEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D26BFC0)
#define RPG_GAMECORE_MATCHTHREEPIECEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26C640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePieceRow_TypeDefinitionIndex = 11890;

	class MatchThreePieceRow : public ::System::Object
	{
	public:
		::System::String* SquareBombPath; // 0x10
		::System::String* RowBombPath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::UInt32 PieceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreePieceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreePieceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPIECEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
