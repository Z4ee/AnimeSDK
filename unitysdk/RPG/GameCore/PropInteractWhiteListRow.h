#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPINTERACTWHITELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C6F440)
#define RPG_GAMECORE_PROPINTERACTWHITELISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6F4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractWhiteListRow_TypeDefinitionIndex = 12512;

	class PropInteractWhiteListRow : public ::System::Object
	{
	public:
		::System::UInt32 PropID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTWHITELISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PropInteractWhiteListRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInteractWhiteListRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTWHITELISTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
