#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_1CD1DC13E3F9B528_OFFSET UNITYSDK_OFFSET(0x1DEC0E40)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_CEE93226425A098B_OFFSET UNITYSDK_OFFSET(0x1DEC0E00)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionLoadingStateChange_TypeDefinitionIndex = 20676;

	class WaitRotatableRegionLoadingStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEE93226425A098B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_CEE93226425A098B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CD1DC13E3F9B528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_METHOD_3_1CD1DC13E3F9B528_OFFSET))(a1, a2);
		}
	};
}
