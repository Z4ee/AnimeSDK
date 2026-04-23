#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PlatformFlag.h"
#include "unitysdk/RPG/CustomRP/PlatfromConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_APPLYPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x18113060)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_GETFLAG_OFFSET UNITYSDK_OFFSET(0x18112C90)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1810E0B0)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_PARSEFLAG_OFFSET UNITYSDK_OFFSET(0x18112CA0)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_RESETFLAG_OFFSET UNITYSDK_OFFSET(0x18112C50)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_SETFLAG_OFFSET UNITYSDK_OFFSET(0x18112C60)
#define RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x181134B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsPlatformConfig_TypeDefinitionIndex = 35042;

	class CRPGraphicsPlatformConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::UInt64* StaticGet__Flag()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CRPGraphicsPlatformConfig_TypeDefinitionIndex)->GetStaticField(0x10A00);
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

		static ::System::Boolean SetFlag(::RPG::CustomRP::PlatformFlag f, ::System::Boolean enable)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PlatformFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_SETFLAG_OFFSET))(f, enable);
		}

		static ::System::Boolean HasFlag(::RPG::CustomRP::PlatformFlag f)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PlatformFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSPLATFORMCONFIG_HASFLAG_OFFSET))(f);
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
