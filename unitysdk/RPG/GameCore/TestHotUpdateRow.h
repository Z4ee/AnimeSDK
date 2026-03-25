#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TESTHOTUPDATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178994F0)
#define RPG_GAMECORE_TESTHOTUPDATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17899C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateRow_TypeDefinitionIndex = 14004;

	class TestHotUpdateRow : public ::System::Object
	{
	public:
		::System::String* AvatarName; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TestHotUpdateRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TestHotUpdateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
