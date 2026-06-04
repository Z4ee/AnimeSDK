#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_377A51B97052342C_OFFSET UNITYSDK_OFFSET(0x19812580)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_74348F98F3A78A5D_OFFSET UNITYSDK_OFFSET(0x19812600)
#define RPG_GAMECORE_GRIDFIGHTWAITOPENORB__CTOR_OFFSET UNITYSDK_OFFSET(0x198125D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitOpenOrb_TypeDefinitionIndex = 18842;

	class GridFightWaitOpenOrb : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitOpenAll; // 0x18
		::System::UInt32 OrbID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_377A51B97052342C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitOpenOrb*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitOpenOrb*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_377A51B97052342C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74348F98F3A78A5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITOPENORB_METHOD_3_74348F98F3A78A5D_OFFSET))(a1, a2);
		}
	};
}
