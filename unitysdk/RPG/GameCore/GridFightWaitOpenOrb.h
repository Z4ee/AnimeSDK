#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_5BDAA3A2FA4FA8A4_OFFSET UNITYSDK_OFFSET(0x1D16EE80)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_74348F98F3A78A5D_OFFSET UNITYSDK_OFFSET(0x1D16EEC0)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16EEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitOpenOrb_TypeDefinitionIndex = 19733;

	class GridFightWaitOpenOrb : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitOpenAll; // 0x18
		::System::UInt32 OrbID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5BDAA3A2FA4FA8A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitOpenOrb*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitOpenOrb*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_5BDAA3A2FA4FA8A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74348F98F3A78A5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_74348F98F3A78A5D_OFFSET))(a1, a2);
		}
	};
}
