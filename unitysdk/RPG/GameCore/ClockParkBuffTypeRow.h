#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B58A0)
#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170B5B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffTypeRow_TypeDefinitionIndex = 10465;

	class ClockParkBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x18
		::System::Boolean BuffDisplay; // 0x1C
		::System::Boolean BuffJoint; // 0x1D
		::System::Boolean BuffRelease; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkBuffTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
