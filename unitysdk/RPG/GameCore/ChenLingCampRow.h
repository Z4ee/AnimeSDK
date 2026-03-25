#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGCAMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17083B40)
#define RPG_GAMECORE_CHENLINGCAMPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17083C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCampRow_TypeDefinitionIndex = 10389;

	class ChenLingCampRow : public ::System::Object
	{
	public:
		::System::String* FlagPrefab; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCAMPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingCampRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingCampRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCAMPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
