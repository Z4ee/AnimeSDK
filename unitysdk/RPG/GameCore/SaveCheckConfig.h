#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SAVECHECKCONFIG_METHOD_2_26B894EAF3325B5D_OFFSET UNITYSDK_OFFSET(0x1D4D46C0)
#define RPG_GAMECORE_SAVECHECKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D4700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveCheckConfig_TypeDefinitionIndex = 16278;

	class SaveCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHECKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_26B894EAF3325B5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveCheckConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveCheckConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHECKCONFIG_METHOD_2_26B894EAF3325B5D_OFFSET))(a1, a2);
		}
	};
}
