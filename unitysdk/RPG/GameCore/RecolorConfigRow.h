#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB7A830)
#define RPG_GAMECORE_RECOLORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecolorConfigRow_TypeDefinitionIndex = 12564;

	class RecolorConfigRow : public ::System::Object
	{
	public:
		::System::String* DefaultColor; // 0x10
		::System::String* WhiteBGColor; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecolorConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecolorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
