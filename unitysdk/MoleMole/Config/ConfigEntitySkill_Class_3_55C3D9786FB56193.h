#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177DC5C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177DC5D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_WRITE_OFFSET UNITYSDK_OFFSET(0x177DD070)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DD6C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193__CTOR_OFFSET UNITYSDK_OFFSET(0x177DD680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex = 87780;

	class ConfigEntitySkill_Class_3_55C3D9786FB56193 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntitySkill*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_Class_3_55C3D9786FB56193_TypeDefinitionIndex)->GetStaticField(0x44B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntitySkill*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkill*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntitySkill*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkill*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CLASS_3_55C3D9786FB56193_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
