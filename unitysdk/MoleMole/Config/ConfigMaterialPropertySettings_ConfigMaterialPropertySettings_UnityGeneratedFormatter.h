#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x159EFB50)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x159EFB60)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x159EFE00)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159EFFF0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x159EFFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertySettings_ConfigMaterialPropertySettings_UnityGeneratedFormatter_TypeDefinitionIndex = 74663;

	class ConfigMaterialPropertySettings_ConfigMaterialPropertySettings_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertySettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_ConfigMaterialPropertySettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x492F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_ConfigMaterialPropertySettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x492F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_ConfigMaterialPropertySettings_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertySettings*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertySettings*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CONFIGMATERIALPROPERTYSETTINGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
