#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSTACKINVISIBLE_METHOD_3_80E1F9A3A7ACE356_OFFSET UNITYSDK_OFFSET(0x1CCEEA20)
#define RPG_GAMECORE_RTSTACKINVISIBLE_METHOD_3_81AEC934980BC093_OFFSET UNITYSDK_OFFSET(0x1CCEE950)
#define RPG_GAMECORE_RTSTACKINVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEEA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStackInvisible_TypeDefinitionIndex = 23845;

	class RtStackInvisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81AEC934980BC093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStackInvisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStackInvisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE_METHOD_3_81AEC934980BC093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80E1F9A3A7ACE356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStackInvisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStackInvisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKINVISIBLE_METHOD_3_80E1F9A3A7ACE356_OFFSET))(a1, a2);
		}
	};
}
