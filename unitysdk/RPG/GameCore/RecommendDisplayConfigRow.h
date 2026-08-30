#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D38D290)
#define RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38D460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecommendDisplayConfigRow_TypeDefinitionIndex = 14451;

	class RecommendDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* UI3DPrefab; // 0x10
		::System::String* UIPrefab; // 0x18
		::System::String* EnvironmentProfilePath; // 0x20
		::System::UInt32 IntroID; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecommendDisplayConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecommendDisplayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
