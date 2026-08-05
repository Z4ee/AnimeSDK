#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E15D0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4E15E0)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4E1860)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1A50)
#define MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1A10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicString_Class_3_6AB6B7044393102E_TypeDefinitionIndex = 82827;

	class DynamicString_Class_3_6AB6B7044393102E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::DynamicString*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicString_Class_3_6AB6B7044393102E_TypeDefinitionIndex)->GetStaticField(0x4E6D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicString_Class_3_6AB6B7044393102E_TypeDefinitionIndex)->GetStaticField(0x4E6D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::DynamicString*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DynamicString*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::DynamicString*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DynamicString*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICSTRING_CLASS_3_6AB6B7044393102E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
