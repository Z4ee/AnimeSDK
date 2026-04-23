#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONPOINTOVERDRAWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x185FCE00)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x185FD3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionPointOverdrawRow_TypeDefinitionIndex = 13992;

	class ActionPointOverdrawRow : public ::System::Object
	{
	public:
		::System::UInt32 MazeBuff; // 0x10
		::System::Int32 ActionPoint; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActionPointOverdrawRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionPointOverdrawRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
