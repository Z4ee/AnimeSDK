#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONPOINTOVERDRAWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAD6C30)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD7240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionPointOverdrawRow_TypeDefinitionIndex = 14204;

	class ActionPointOverdrawRow : public ::System::Object
	{
	public:
		::System::Int32 ActionPoint; // 0x10
		::System::UInt32 MazeBuff; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionPointOverdrawRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionPointOverdrawRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
