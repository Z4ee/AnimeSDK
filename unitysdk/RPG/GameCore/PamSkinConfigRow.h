#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMSKINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17487820)
#define RPG_GAMECORE_PAMSKINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174879C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamSkinConfigRow_TypeDefinitionIndex = 13115;

	class PamSkinConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* SkinIcon; // 0x20
		::System::UInt32 SkinID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMSKINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamSkinConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamSkinConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMSKINCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
