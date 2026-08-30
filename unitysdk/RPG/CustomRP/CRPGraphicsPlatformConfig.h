#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PlatformFlag.h"
#include "unitysdk/RPG/CustomRP/PlatfromConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_APPLYPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x1C67C3D0)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_GETFLAG_OFFSET UNITYSDK_OFFSET(0x1C67C020)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1C677320)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_PARSEFLAG_OFFSET UNITYSDK_OFFSET(0x1C67C030)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_RESETFLAG_OFFSET UNITYSDK_OFFSET(0x1C67BFE0)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1C67BFF0)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67C8F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsPlatformConfig_TypeDefinitionIndex = 36968;

	class CRPGraphicsPlatformConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::UInt64* StaticGet__Flag()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CRPGraphicsPlatformConfig_TypeDefinitionIndex)->GetStaticField(0xDAD0);
		}
		::Il2CppArray<::RPG::CustomRP::PlatfromConfig>* configs; // 0x18
		::System::Boolean _NeedParseFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void ResetFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_RESETFLAG_OFFSET))(this);
		}

		static ::System::Boolean SetFlag(::RPG::CustomRP::PlatformFlag a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PlatformFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_SETFLAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasFlag(::RPG::CustomRP::PlatformFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PlatformFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_HASFLAG_OFFSET))(a1);
		}

		static ::System::UInt64 GetFlag()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_GETFLAG_OFFSET))();
		}

		::System::Void ParseFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_PARSEFLAG_OFFSET))(this);
		}

		::System::Void ApplyPlatformConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_APPLYPLATFORMCONFIG_OFFSET))(this);
		}
	};
}
