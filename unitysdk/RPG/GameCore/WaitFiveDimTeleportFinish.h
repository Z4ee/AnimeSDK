#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_032FC6AF61BDC9FA_OFFSET UNITYSDK_OFFSET(0x19E55850)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_8744FEB7414033C6_OFFSET UNITYSDK_OFFSET(0x19E55960)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E55930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimTeleportFinish_TypeDefinitionIndex = 20113;

	class WaitFiveDimTeleportFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_032FC6AF61BDC9FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimTeleportFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_032FC6AF61BDC9FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8744FEB7414033C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_8744FEB7414033C6_OFFSET))(a1, a2);
		}
	};
}
