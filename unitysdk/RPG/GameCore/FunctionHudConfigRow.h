#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FUNCTIONHUDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D11EB80)
#define RPG_GAMECORE_FUNCTIONHUDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionHudConfigRow_TypeDefinitionIndex = 13200;

	class FunctionHudConfigRow : public ::System::Object
	{
	public:
		::System::String* OverrideHudIconPath; // 0x10
		::System::String* RedDot; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* RedDotHud; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 FunctionID; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FunctionHudConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunctionHudConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONHUDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
