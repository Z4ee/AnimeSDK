#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19695BD0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19696250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalGameplayConfigRow_TypeDefinitionIndex = 12493;

	class DecalGameplayConfigRow : public ::System::Object
	{
	public:
		::System::String* TextureMapPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 DecalID; // 0x20
		::System::UInt32 RequiredItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalGameplayConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalGameplayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
