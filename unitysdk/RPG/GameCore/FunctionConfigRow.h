#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_10;

#define RPG_GAMECORE_FUNCTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9841A0)
#define RPG_GAMECORE_FUNCTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9843A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunctionConfigRow_TypeDefinitionIndex = 12818;

	class FunctionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_10*>* OverrideGotoID; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_10*>* OverrideUnlockID; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 GotoID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FunctionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunctionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
