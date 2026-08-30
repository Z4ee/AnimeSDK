#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHARECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E09B8C0)
#define RPG_GAMECORE_SHARECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09BA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareConfigRow_TypeDefinitionIndex = 14326;

	class ShareConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ShareChannelList; // 0x10
		::System::Boolean IsOverSea; // 0x18
		::System::UInt32 PlatformType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShareConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShareConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
