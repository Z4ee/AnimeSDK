#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x117020B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x117020C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_WRITE_OFFSET UNITYSDK_OFFSET(0x11702250)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117023B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C__CTOR_OFFSET UNITYSDK_OFFSET(0x11702370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventGroup_Class_3_826540D274AF1A4C_TypeDefinitionIndex = 83587;

	class ConfigEntityAnimEventGroup_Class_3_826540D274AF1A4C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventGroup_Class_3_826540D274AF1A4C_TypeDefinitionIndex)->GetStaticField(0x4F8E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventGroup_Class_3_826540D274AF1A4C_TypeDefinitionIndex)->GetStaticField(0x4F8E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEventGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEventGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_CLASS_3_826540D274AF1A4C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
