#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenAreaConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigLimit.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_GenTagConfigItem.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_617;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_GETROUTEMAPTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12CFA820)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x12CFB110)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_REFRESHROUTECOUNT_OFFSET UNITYSDK_OFFSET(0x12CFA6F0)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_RUNTIMERELOADBYCONFIG_OFFSET UNITYSDK_OFFSET(0x12CFA940)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_VALIDATE_OFFSET UNITYSDK_OFFSET(0x12CFA650)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CFB190)
#define MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFA630)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenRouteMapConfig_TypeDefinitionIndex = 82318;

	class AbyssS2_GenRouteMapConfig : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_lazyCheck()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AbyssS2_GenRouteMapConfig_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		// static const ::System::String* AreaPoolV2; // 0x0
		// static const ::System::String* LSEED_KEY; // 0x0
		::MoleMole::AbyssS2_GenConfigMeta genMeta; // 0x10
		::System::Int32 genRouteMapID; // 0x24
		::System::Int32 genRoundID; // 0x28
		::System::Int32 genRouteMapLayer; // 0x2C
		::System::Boolean genRouteLastMapLayer; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenConfigLimit>* genLimits; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* skipFloorCfgs; // 0x40
		::System::Boolean hasRouteDiscrete; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* routeDiscretes; // 0x50
		::System::Boolean hasRouteStraight; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* routeStraights; // 0x60
		::System::Int64 seed; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* areaPools; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* fixedFloorAreas; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* bannedFloorAreas; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* everyAreaMaxCount; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* everyAreaMinMustCount; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* areaPairForbidConnect; // 0x98
		::System::Int32 dontConnectStrategy; // 0xA0
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>* areaTagMaxConnectCount; // 0xA8
		::System::Collections::Generic::List_1<::System::Int32>* singlePointForbiddenAreaID; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* RoundAreaConfigMaxCount; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* RoundAreaConfigIndexMaxCount; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* RouteMapAreaConfigIndexMaxCount; // 0xC8
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* RouteMapFloorFixedAreaConfigIndex; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* RouteMapFloorBannedAreaConfigIndex; // 0xD8

		::System::Void _ctor(::System::Int32 routeMapID, ::System::Int32 routeMapLayer, ::System::Boolean isLastLayer, ::System::Int32 genRoundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CTOR_OFFSET))(this, routeMapID, routeMapLayer, isLastLayer, genRoundID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG__CCTOR_OFFSET))();
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_VALIDATE_OFFSET))(this);
		}

		::System::Void RefreshRouteCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_REFRESHROUTECOUNT_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_617* GetRouteMapTemplate()
		{
			return ((::Class_2_208CC9941471731A_617*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_GETROUTEMAPTEMPLATE_OFFSET))(this);
		}

		::System::Void RuntimeReloadByConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_RUNTIMERELOADBYCONFIG_OFFSET))(this);
		}

		::System::Void OnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENROUTEMAPCONFIG_ONCHANGED_OFFSET))(this);
		}
	};
}
