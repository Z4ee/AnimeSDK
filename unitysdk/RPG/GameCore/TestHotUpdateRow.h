#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TESTHOTUPDATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C8D80)
#define RPG_GAMECORE_TESTHOTUPDATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C98B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateRow_TypeDefinitionIndex = 15110;

	class TestHotUpdateRow : public ::System::Object
	{
	public:
		::System::String* AvatarName; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TestHotUpdateRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TestHotUpdateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
