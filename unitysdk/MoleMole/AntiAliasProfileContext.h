#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"

#define MOLEMOLE_ANTIALIASPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1628D0C0)

namespace MoleMole
{
	inline static constexpr unsigned int AntiAliasProfileContext_TypeDefinitionIndex = 64857;

	class AntiAliasProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode AntiAliasSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIALIASPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
