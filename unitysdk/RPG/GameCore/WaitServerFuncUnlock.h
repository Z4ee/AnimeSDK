#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK_METHOD_3_866137965C7CDD57_OFFSET UNITYSDK_OFFSET(0x191085F0)
#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK_METHOD_3_F758297F7FC3C867_OFFSET UNITYSDK_OFFSET(0x19108560)
#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x191085C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerFuncUnlock_TypeDefinitionIndex = 19449;

	class WaitServerFuncUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F758297F7FC3C867(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerFuncUnlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerFuncUnlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK_METHOD_3_F758297F7FC3C867_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_866137965C7CDD57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerFuncUnlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerFuncUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK_METHOD_3_866137965C7CDD57_OFFSET))(a1, a2);
		}
	};
}
