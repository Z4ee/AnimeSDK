#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIIconMount_IconMountConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIICONMOUNT_TRYGETMOUNTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x16ABA370)
#define MOLEMOLE_CONFIGUIICONMOUNT_TRYGETMOUNTCONFIG_OFFSET UNITYSDK_OFFSET(0x16ABA250)
#define MOLEMOLE_CONFIGUIICONMOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABA5A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIIconMount_TypeDefinitionIndex = 54315;

	class ConfigUIIconMount : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ConfigUIIconMount_IconMountConfig*>*>* MountConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIICONMOUNT__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetMountConfig(::System::String* uiDefine, ::System::Collections::Generic::List_1<::MoleMole::ConfigUIIconMount_IconMountConfig*>*& configs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ConfigUIIconMount_IconMountConfig*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIICONMOUNT_TRYGETMOUNTCONFIG_OFFSET))(this, uiDefine, configs);
		}

		::System::Boolean TryGetMountConfig_1(::System::String* uiDefine, ::System::String* iconPath, ::MoleMole::ConfigUIIconMount_IconMountConfig*& config)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::ConfigUIIconMount_IconMountConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIICONMOUNT_TRYGETMOUNTCONFIG_1_OFFSET))(this, uiDefine, iconPath, config);
		}
	};
}
