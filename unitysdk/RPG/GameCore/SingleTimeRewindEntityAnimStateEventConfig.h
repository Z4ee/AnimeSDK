#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_3E11F818A1B232EA_OFFSET UNITYSDK_OFFSET(0x1770B740)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_A8BDCC33916EF3AD_OFFSET UNITYSDK_OFFSET(0x1770BA30)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimStateEventConfig_TypeDefinitionIndex = 15204;

	class SingleTimeRewindEntityAnimStateEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimStateName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8BDCC33916EF3AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_A8BDCC33916EF3AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E11F818A1B232EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_3E11F818A1B232EA_OFFSET))(a1, a2);
		}
	};
}
