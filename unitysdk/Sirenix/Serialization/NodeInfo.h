#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_NODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xAC5F30)
#define SIRENIX_SERIALIZATION_NODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAC5F40)
#define SIRENIX_SERIALIZATION_NODEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FA7E4C0)
#define SIRENIX_SERIALIZATION_NODEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1FA7E600)
#define SIRENIX_SERIALIZATION_NODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7EAE0)
#define SIRENIX_SERIALIZATION_NODEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC5EB0)
#define SIRENIX_SERIALIZATION_NODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5E90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int NodeInfo_TypeDefinitionIndex = 7520;

	struct alignas(8) NodeInfo
	{
		static ::Sirenix::Serialization::NodeInfo* StaticGet_Empty()
		{
			return (::Sirenix::Serialization::NodeInfo*)Il2CppClass::FromTypeDefinitionIndex(NodeInfo_TypeDefinitionIndex)->GetStaticField(0x61A0);
		}
		::Sirenix::Serialization::BufferedString Name; // 0x10
		::System::Int32 Id; // 0x20
		::System::Type* Type; // 0x28
		::System::Boolean IsArray; // 0x30
		::System::Boolean IsEmpty; // 0x31

		::System::Void _ctor(::Sirenix::Serialization::BufferedString& name, ::System::Int32 id, ::System::Type* type, ::System::Boolean isArray)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::BufferedString&, ::System::Int32, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO__CTOR_OFFSET))(this, name, id, type, isArray);
		}

		::System::Void _ctor_1(::System::Boolean parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO__CTOR_1_OFFSET))(this, parameter);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO__CCTOR_OFFSET))();
		}

		static ::System::Boolean op_Equality(::Sirenix::Serialization::NodeInfo a, ::Sirenix::Serialization::NodeInfo b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::NodeInfo, ::Sirenix::Serialization::NodeInfo))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Sirenix::Serialization::NodeInfo a, ::Sirenix::Serialization::NodeInfo b)
		{
			return ((::System::Boolean(*)(::Sirenix::Serialization::NodeInfo, ::Sirenix::Serialization::NodeInfo))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_NODEINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}
