#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_DynamicDrop.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ProjectileDrop.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETDYNAMICDROPCONFIG_OFFSET UNITYSDK_OFFSET(0xFB0CD60)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGUIDEPOINTSTRATEGY_OFFSET UNITYSDK_OFFSET(0xFB0C720)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETPROJECTILEDROPCONFIG_OFFSET UNITYSDK_OFFSET(0xFB0CE00)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_CREATEINTERVAL_OFFSET UNITYSDK_OFFSET(0xFB0CCF0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_GRIDSIZE_OFFSET UNITYSDK_OFFSET(0xFB0CC60)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISDELAYCREATEENTITYENABLED_OFFSET UNITYSDK_OFFSET(0xFB0CB60)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISENTITYGRIDDISABLED_OFFSET UNITYSDK_OFFSET(0xFB0CBE0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_HASVALIDPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0xFB0C8F0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB0CF20)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0CEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_TypeDefinitionIndex = 63146;

	class ConfigViewObjectMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_DefaultGuidePointAutoGenStrategy()
		{
			return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x3D4E0);
		}
		static ::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop* StaticGet_DefaultProjectileDropConfig()
		{
			return (::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0x3D528);
		}
		static ::MoleMole::Config::ConfigViewObjectMisc_DynamicDrop* StaticGet_DefaultDynamicDropConfig()
		{
			return (::MoleMole::Config::ConfigViewObjectMisc_DynamicDrop*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0xEF80);
		}
		static ::MoleMole::Config::ConfigViewObjectMisc_EntityCreate* StaticGet_debugCreate()
		{
			return (::MoleMole::Config::ConfigViewObjectMisc_EntityCreate*)Il2CppClass::FromTypeDefinitionIndex(ConfigViewObjectMisc_TypeDefinitionIndex)->GetStaticField(0xEF88);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GuidePoint_AutoGenStrategy>* GuidePoint_AutoGenStategies; // 0x58
		::System::Int32 obstacleCost; // 0x60
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate defaultEntityCreate; // 0x64
		::System::Single inactivateObservationTime; // 0x70
		::System::Single activateObservationTime; // 0x74
		::System::Single visibleCosHalfAngleThreshold; // 0x78
		::System::Single bypassVisibleSqrDistanceThreshold; // 0x7C
		::MoleMole::Config::ConfigViewObjectMisc_DynamicDrop dynamicDropConfig; // 0x80
		::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop projectileDropConfig; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* MonsterNotCountingTag; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* voEventString; // 0xB0
		::Foundation::AssetPath MPNavigationPointPrefabPath; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC__CCTOR_OFFSET))();
		}

		::MoleMole::Config::GuidePoint_AutoGenStrategy GetGuidePointStrategy(::System::String* strategyID)
		{
			return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETGUIDEPOINTSTRATEGY_OFFSET))(this, strategyID);
		}

		::System::Boolean HasValidPlatformConfig(::MoleMole::Config::ConfigViewObjectMisc_EntityCreate& createInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc_EntityCreate&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_HASVALIDPLATFORMCONFIG_OFFSET))(this, createInfo);
		}

		::System::Boolean Get_IsDelayCreateEntityEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISDELAYCREATEENTITYENABLED_OFFSET))(this);
		}

		::System::Boolean Get_IsEntityGridDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_ISENTITYGRIDDISABLED_OFFSET))(this);
		}

		::System::Single Get_GridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_GRIDSIZE_OFFSET))(this);
		}

		::System::Single Get_CreateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GET_CREATEINTERVAL_OFFSET))(this);
		}

		::MoleMole::Config::ConfigViewObjectMisc_DynamicDrop GetDynamicDropConfig()
		{
			return ((::MoleMole::Config::ConfigViewObjectMisc_DynamicDrop(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETDYNAMICDROPCONFIG_OFFSET))(this);
		}

		::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop GetProjectileDropConfig()
		{
			return ((::MoleMole::Config::ConfigViewObjectMisc_ProjectileDrop(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_GETPROJECTILEDROPCONFIG_OFFSET))(this);
		}
	};
}
