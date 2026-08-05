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

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1170AD90)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1170ADA0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_WRITE_OFFSET UNITYSDK_OFFSET(0x1170AFF0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170B1B0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1170B170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertySettings_Class_3_CAF2FFC825917B6A_TypeDefinitionIndex = 57777;

	class ConfigMaterialPropertySettings_Class_3_CAF2FFC825917B6A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertySettings*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_Class_3_CAF2FFC825917B6A_TypeDefinitionIndex)->GetStaticField(0x4F940);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_Class_3_CAF2FFC825917B6A_TypeDefinitionIndex)->GetStaticField(0x4F948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertySettings_Class_3_CAF2FFC825917B6A_TypeDefinitionIndex)->GetStaticField(0x4F950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertySettings*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertySettings*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_CLASS_3_CAF2FFC825917B6A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
