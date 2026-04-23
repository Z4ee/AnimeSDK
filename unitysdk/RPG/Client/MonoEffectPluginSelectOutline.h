#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xA99F540)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_METHOD_8_ED29F23CD1CAE89E_OFFSET UNITYSDK_OFFSET(0xA99F1C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE_SETSTENCIL_OFFSET UNITYSDK_OFFSET(0xA99F3A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSELECTOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99F480)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSelectOutline_TypeDefinitionIndex = 64544;

	class MonoEffectPluginSelectOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Color KeyOutlineInnerColor; // 0x220
		::UnityEngine::Color KeyOutlineOuterColor; // 0x230
		::System::Single HighlightPow; // 0x240
		::System::Single OutlineWidth; // 0x244
		::System::Single OutlineWidth2; // 0x248
		::System::Single OutlineEnhance; // 0x24C
		::System::Int32 Stencil; // 0x250

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
