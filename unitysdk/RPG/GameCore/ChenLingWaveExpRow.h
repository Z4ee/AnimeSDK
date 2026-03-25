#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17089EB0)
#define RPG_GAMECORE_CHENLINGWAVEEXPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17089FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingWaveExpRow_TypeDefinitionIndex = 10382;

	class ChenLingWaveExpRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 Wave; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingWaveExpRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingWaveExpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
