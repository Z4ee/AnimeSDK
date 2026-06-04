#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_6_58218579F99925E0_OFFSET UNITYSDK_OFFSET(0x1970C3E0)
#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_6_CB0CBA4DC74F435B_OFFSET UNITYSDK_OFFSET(0x1970C270)
#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970C340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActModifyContentParamConfig_TypeDefinitionIndex = 18241;

	class FateActModifyContentParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_CB0CBA4DC74F435B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_6_CB0CBA4DC74F435B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_58218579F99925E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_6_58218579F99925E0_OFFSET))(a1, a2);
		}
	};
}
