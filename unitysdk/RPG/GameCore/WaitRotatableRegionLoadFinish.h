#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_METHOD_3_8FA614DFAA768343_OFFSET UNITYSDK_OFFSET(0x19E604F0)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_METHOD_3_91BB4142570908AF_OFFSET UNITYSDK_OFFSET(0x19E603E0)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E604C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionLoadFinish_TypeDefinitionIndex = 19770;

	class WaitRotatableRegionLoadFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91BB4142570908AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_METHOD_3_91BB4142570908AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FA614DFAA768343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_METHOD_3_8FA614DFAA768343_OFFSET))(a1, a2);
		}
	};
}
