#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITCONDITIONSTRING_METHOD_3_89EAEA962FBAD69E_OFFSET UNITYSDK_OFFSET(0x19E52880)
#define RPG_GAMECORE_WAITCONDITIONSTRING_METHOD_3_EF88A1D09BD35B1E_OFFSET UNITYSDK_OFFSET(0x19E52A50)
#define RPG_GAMECORE_WAITCONDITIONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19E52A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitConditionString_TypeDefinitionIndex = 19312;

	class WaitConditionString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TaskID; // 0x18
		::System::Boolean WaitOwnerOnly; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89EAEA962FBAD69E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitConditionString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitConditionString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING_METHOD_3_89EAEA962FBAD69E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF88A1D09BD35B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitConditionString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCONDITIONSTRING_METHOD_3_EF88A1D09BD35B1E_OFFSET))(a1, a2);
		}
	};
}
