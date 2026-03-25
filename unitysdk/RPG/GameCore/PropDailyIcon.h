#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPDAILYICON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17519730)
#define RPG_GAMECORE_PROPDAILYICON__CTOR_OFFSET UNITYSDK_OFFSET(0x175198D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDailyIcon_TypeDefinitionIndex = 11439;

	class PropDailyIcon : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::UInt32 IconID; // 0x18
		::System::Boolean IsActive; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAILYICON__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PropDailyIcon*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDailyIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAILYICON_FROMBINARY_OFFSET))(array, val);
		}
	};
}
