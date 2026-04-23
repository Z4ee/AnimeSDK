#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C91150)
#define RPG_GAMECORE_RECOLORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C912A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecolorConfigRow_TypeDefinitionIndex = 11950;

	class RecolorConfigRow : public ::System::Object
	{
	public:
		::System::String* WhiteBGColor; // 0x10
		::System::String* DefaultColor; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RecolorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecolorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
