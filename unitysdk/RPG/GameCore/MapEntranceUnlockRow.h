#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPENTRANCEUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198BB9F0)
#define RPG_GAMECORE_MAPENTRANCEUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198BBAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntranceUnlockRow_TypeDefinitionIndex = 13394;

	class MapEntranceUnlockRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 EntranceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRANCEUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapEntranceUnlockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapEntranceUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRANCEUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
