#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_64FD42DB535B1B5D_OFFSET UNITYSDK_OFFSET(0x19AC91D0)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_8BD9133EB76CD569_OFFSET UNITYSDK_OFFSET(0x19AC90C0)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC91A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveHitByTimeRewindListener_TypeDefinitionIndex = 19519;

	class RemoveHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BD9133EB76CD569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveHitByTimeRewindListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_8BD9133EB76CD569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64FD42DB535B1B5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_64FD42DB535B1B5D_OFFSET))(a1, a2);
		}
	};
}
