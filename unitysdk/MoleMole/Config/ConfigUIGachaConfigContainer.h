#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_ADDNEWGACHAKEY_OFFSET UNITYSDK_OFFSET(0x181D6060)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_ADDROLECONFIG_OFFSET UNITYSDK_OFFSET(0x181D6230)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0x181D6440)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_GET_GACHAKEYS_OFFSET UNITYSDK_OFFSET(0x181D5F60)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_HASGACHAKEY_OFFSET UNITYSDK_OFFSET(0x181D5FB0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x181D65B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaConfigContainer_TypeDefinitionIndex = 77759;

	class ConfigUIGachaConfigContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIGachaRoleConfig*>*>* _roleConfigDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_gachaKeys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_GET_GACHAKEYS_OFFSET))(this);
		}

		::System::Boolean HasGachaKey(::System::String* gachaKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_HASGACHAKEY_OFFSET))(this, gachaKey);
		}

		::System::Boolean AddNewGachaKey(::System::String* gachaKey, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIGachaRoleConfig*>*& roleConfigs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIGachaRoleConfig*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_ADDNEWGACHAKEY_OFFSET))(this, gachaKey, roleConfigs);
		}

		::System::Void AddRoleConfig(::System::String* gachaKey, ::System::String* extraKey, ::MoleMole::Config::ConfigUIGachaRoleConfig* roleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigUIGachaRoleConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_ADDROLECONFIG_OFFSET))(this, gachaKey, extraKey, roleConfig);
		}

		::MoleMole::Config::ConfigUIGachaRoleConfig* GetRoleConfig(::System::String* gachaKey, ::System::String* extraKey)
		{
			return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHACONFIGCONTAINER_GETROLECONFIG_OFFSET))(this, gachaKey, extraKey);
		}
	};
}
