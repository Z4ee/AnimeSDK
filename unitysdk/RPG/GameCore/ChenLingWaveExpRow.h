#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C38B2B0)
#define RPG_GAMECORE_CHENLINGWAVEEXPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingWaveExpRow_TypeDefinitionIndex = 10695;

	class ChenLingWaveExpRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 Wave; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingWaveExpRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingWaveExpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
