#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SO_WAIT_METHOD_4_76252E520E671B42_OFFSET UNITYSDK_OFFSET(0x1D4BDA50)
#define RPG_GAMECORE_SO_WAIT_METHOD_4_A7FC8081E2B3D6C9_OFFSET UNITYSDK_OFFSET(0x1D4BD6A0)
#define RPG_GAMECORE_SO_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BD690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Wait_TypeDefinitionIndex = 19825;

	class SO_Wait : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::Single Time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_76252E520E671B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Wait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Wait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT_METHOD_4_76252E520E671B42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7FC8081E2B3D6C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Wait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT_METHOD_4_A7FC8081E2B3D6C9_OFFSET))(a1, a2);
		}
	};
}
