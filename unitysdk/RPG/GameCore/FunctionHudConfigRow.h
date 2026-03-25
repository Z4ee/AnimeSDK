#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FUNCTIONHUDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172247A0)
#define RPG_GAMECORE_FUNCTIONHUDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17224A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionHudConfigRow_TypeDefinitionIndex = 12148;

	class FunctionHudConfigRow : public ::System::Object
	{
	public:
		::System::String* RedDot; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* RedDotHud; // 0x20
		::System::String* OverrideHudIconPath; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 FunctionID; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FunctionHudConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunctionHudConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
