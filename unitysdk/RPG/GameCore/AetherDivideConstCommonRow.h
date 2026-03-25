#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F613D0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F61970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideConstCommonRow_TypeDefinitionIndex = 10252;

	class AetherDivideConstCommonRow : public ::System::Object
	{
	public:
		::System::String* ConstValueType; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideConstCommonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideConstCommonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
