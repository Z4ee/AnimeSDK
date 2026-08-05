#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177DB430)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177DB440)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_WRITE_OFFSET UNITYSDK_OFFSET(0x177DB660)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DB810)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x177DB7B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventProtection_Class_3_B215AC5F3B3A6F6A_TypeDefinitionIndex = 77264;

	class ConfigEntityAnimEventProtection_Class_3_B215AC5F3B3A6F6A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAnimEventProtection>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_Class_3_B215AC5F3B3A6F6A_TypeDefinitionIndex)->GetStaticField(0x44B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_Class_3_B215AC5F3B3A6F6A_TypeDefinitionIndex)->GetStaticField(0x44B28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_Class_3_B215AC5F3B3A6F6A_TypeDefinitionIndex)->GetStaticField(0x44B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEventProtection& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEventProtection& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CLASS_3_B215AC5F3B3A6F6A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
