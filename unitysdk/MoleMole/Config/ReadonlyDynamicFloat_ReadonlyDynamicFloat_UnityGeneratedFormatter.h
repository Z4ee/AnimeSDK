#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ReadonlyDynamicFloat; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x183D3020)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x183D3030)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x183D32D0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183D34C0)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicFloat_ReadonlyDynamicFloat_UnityGeneratedFormatter_TypeDefinitionIndex = 74035;

	class ReadonlyDynamicFloat_ReadonlyDynamicFloat_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ReadonlyDynamicFloat*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_ReadonlyDynamicFloat_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_ReadonlyDynamicFloat_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_ReadonlyDynamicFloat_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ReadonlyDynamicFloat*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicFloat*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ReadonlyDynamicFloat*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicFloat*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_READONLYDYNAMICFLOAT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
