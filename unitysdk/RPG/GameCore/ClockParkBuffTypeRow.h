#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19656440)
#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196566B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffTypeRow_TypeDefinitionIndex = 10745;

	class ClockParkBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Boolean BuffRelease; // 0x18
		::System::Boolean BuffDisplay; // 0x19
		::System::Boolean BuffJoint; // 0x1A
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkBuffTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
