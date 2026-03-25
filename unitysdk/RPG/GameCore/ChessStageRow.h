#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHESSSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1708E3F0)
#define RPG_GAMECORE_CHESSSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1708E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessStageRow_TypeDefinitionIndex = 16186;

	class ChessStageRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::String* ConfigPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChessStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
