#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDFDE30)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFE3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideConstCommonRow_TypeDefinitionIndex = 10906;

	class AetherDivideConstCommonRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::String* ConstValueType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideConstCommonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideConstCommonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
