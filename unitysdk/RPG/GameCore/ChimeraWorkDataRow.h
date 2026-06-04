#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1964DB70)
#define RPG_GAMECORE_CHIMERAWORKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1964DE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkDataRow_TypeDefinitionIndex = 12410;

	class ChimeraWorkDataRow : public ::System::Object
	{
	public:
		::System::String* WorkPrefab; // 0x10
		::System::String* JsonConfig; // 0x18
		::System::String* WorkIcon; // 0x20
		::RPG::GameCore::ChimeraWorkType Tag; // 0x28
		::System::Single Hp; // 0x2C
		::System::UInt32 WorkValue; // 0x30
		::System::UInt32 WorkID; // 0x34
		::System::UInt32 DisplayID; // 0x38
		::System::Single Atk; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
