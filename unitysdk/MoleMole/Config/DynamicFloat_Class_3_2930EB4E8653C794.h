#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicFloat; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C56310)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C56320)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_WRITE_OFFSET UNITYSDK_OFFSET(0x16C565A0)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C56790)
#define MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794__CTOR_OFFSET UNITYSDK_OFFSET(0x16C56750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicFloat_Class_3_2930EB4E8653C794_TypeDefinitionIndex = 81602;

	class DynamicFloat_Class_3_2930EB4E8653C794 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::DynamicFloat*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_Class_3_2930EB4E8653C794_TypeDefinitionIndex)->GetStaticField(0x48960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_Class_3_2930EB4E8653C794_TypeDefinitionIndex)->GetStaticField(0x48968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicFloat_Class_3_2930EB4E8653C794_TypeDefinitionIndex)->GetStaticField(0x48970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicFloat*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicFloat*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::DynamicFloat*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicFloat*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICFLOAT_CLASS_3_2930EB4E8653C794_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
