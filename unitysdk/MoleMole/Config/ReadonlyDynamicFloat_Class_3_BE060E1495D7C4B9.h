#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ReadonlyDynamicFloat; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF6600)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF6610)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_WRITE_OFFSET UNITYSDK_OFFSET(0x19FF6860)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF6A20)
#define MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF69E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReadonlyDynamicFloat_Class_3_BE060E1495D7C4B9_TypeDefinitionIndex = 51776;

	class ReadonlyDynamicFloat_Class_3_BE060E1495D7C4B9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ReadonlyDynamicFloat*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_Class_3_BE060E1495D7C4B9_TypeDefinitionIndex)->GetStaticField(0x44BD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_Class_3_BE060E1495D7C4B9_TypeDefinitionIndex)->GetStaticField(0x44BD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReadonlyDynamicFloat_Class_3_BE060E1495D7C4B9_TypeDefinitionIndex)->GetStaticField(0x44BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ReadonlyDynamicFloat*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicFloat*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ReadonlyDynamicFloat*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ReadonlyDynamicFloat*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_READONLYDYNAMICFLOAT_CLASS_3_BE060E1495D7C4B9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
