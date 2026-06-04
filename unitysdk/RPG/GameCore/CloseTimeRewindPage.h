#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_53A1F2E0AA6E6EF2_OFFSET UNITYSDK_OFFSET(0x196644C0)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_74EFA1F7C062107E_OFFSET UNITYSDK_OFFSET(0x196645D0)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x196645A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseTimeRewindPage_TypeDefinitionIndex = 19508;

	class CloseTimeRewindPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53A1F2E0AA6E6EF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_53A1F2E0AA6E6EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74EFA1F7C062107E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_METHOD_3_74EFA1F7C062107E_OFFSET))(a1, a2);
		}
	};
}
