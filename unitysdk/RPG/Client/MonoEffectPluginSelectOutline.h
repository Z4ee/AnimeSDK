#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x9CDC730)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_ED29F23CD1CAE89E_OFFSET UNITYSDK_OFFSET(0x9CDC3B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_SETSTENCIL_OFFSET UNITYSDK_OFFSET(0x9CDC590)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC670)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSelectOutline_TypeDefinitionIndex = 57290;

	class MonoEffectPluginSelectOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Color KeyOutlineInnerColor; // 0x218
		::UnityEngine::Color KeyOutlineOuterColor; // 0x228
		::System::Single HighlightPow; // 0x238
		::System::Single OutlineWidth; // 0x23C
		::System::Single OutlineWidth2; // 0x240
		::System::Single OutlineEnhance; // 0x244
		::System::Int32 Stencil; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_ED29F23CD1CAE89E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_ED29F23CD1CAE89E_OFFSET))(this);
		}

		::System::Void SetStencil(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_SETSTENCIL_OFFSET))(this, a1);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
