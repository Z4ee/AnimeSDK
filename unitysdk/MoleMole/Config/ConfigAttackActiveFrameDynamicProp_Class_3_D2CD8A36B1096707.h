#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8F1BD0)
#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8F1BE0)
#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8F2880)
#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8F2FE0)
#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F2FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707_TypeDefinitionIndex = 41078;

	class ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707_TypeDefinitionIndex)->GetStaticField(0x39B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707_TypeDefinitionIndex)->GetStaticField(0x39B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707_TypeDefinitionIndex)->GetStaticField(0x39B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAttackActiveFrameDynamicProp_Class_3_D2CD8A36B1096707_TypeDefinitionIndex)->GetStaticField(0x39B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackActiveFrameDynamicProp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP_CLASS_3_D2CD8A36B1096707_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
