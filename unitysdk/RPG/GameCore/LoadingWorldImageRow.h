#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOADINGWORLDIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198A89C0)
#define RPG_GAMECORE_LOADINGWORLDIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198A8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingWorldImageRow_TypeDefinitionIndex = 13320;

	class LoadingWorldImageRow : public ::System::Object
	{
	public:
		::System::String* EffectContainer; // 0x10
		::System::String* PamuPrefabName; // 0x18
		::System::String* ImagePath; // 0x20
		::System::UInt32 WorldID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadingWorldImageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingWorldImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGWORLDIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
