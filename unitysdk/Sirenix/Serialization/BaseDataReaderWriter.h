#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/Sirenix/Serialization/NodeInfo.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class Type; }

#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_CLEARNODES_OFFSET UNITYSDK_OFFSET(0x1F8C6A30)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_EXPANDNAMEBUFFER_OFFSET UNITYSDK_OFFSET(0x1F8C65A0)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_EXPANDNODES_OFFSET UNITYSDK_OFFSET(0x1F8C66D0)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1F8C5D00)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1F8C63A0)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_ISINARRAYNODE_OFFSET UNITYSDK_OFFSET(0x1F8C6340)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_NODEDEPTH_OFFSET UNITYSDK_OFFSET(0x1F8C6390)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_POPARRAY_OFFSET UNITYSDK_OFFSET(0x1F8C6940)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_POPNODE_OFFSET UNITYSDK_OFFSET(0x1F8C6890)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_PUSHARRAY_OFFSET UNITYSDK_OFFSET(0x1F8C6700)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_PUSHNODE_OFFSET UNITYSDK_OFFSET(0x1F8C6450)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1F8C6120)
#define SIRENIX_SERIALIZATION_BASEDATAREADERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C6A60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseDataReaderWriter_TypeDefinitionIndex = 7417;

	class BaseDataReaderWriter : public ::System::Object
	{
	public:
		::Il2CppArray<::Sirenix::Serialization::NodeInfo>* nodes; // 0x10
		::Il2CppArray<::System::Byte>* nodeNameBuffer; // 0x18
		::System::Int32 nodesLength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::TwoWaySerializationBinder* get_Binder()
		{
			return ((::Sirenix::Serialization::TwoWaySerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_BINDER_OFFSET))(this);
		}

		::System::Void set_Binder(::Sirenix::Serialization::TwoWaySerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::TwoWaySerializationBinder*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_SET_BINDER_OFFSET))(this, value);
		}

		::System::Boolean get_IsInArrayNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_ISINARRAYNODE_OFFSET))(this);
		}

		::System::Int32 get_NodeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_NODEDEPTH_OFFSET))(this);
		}

		::Sirenix::Serialization::NodeInfo get_CurrentNode()
		{
			return ((::Sirenix::Serialization::NodeInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_GET_CURRENTNODE_OFFSET))(this);
		}

		::System::Void PushNode(::Sirenix::Serialization::BufferedString& name, ::System::Int32 id, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::BufferedString&, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_PUSHNODE_OFFSET))(this, name, id, type);
		}

		::System::Void PushArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_PUSHARRAY_OFFSET))(this);
		}

		::System::Void ExpandNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_EXPANDNODES_OFFSET))(this);
		}

		::System::Void ExpandNameBuffer(::System::Int32 minSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_EXPANDNAMEBUFFER_OFFSET))(this, minSize);
		}

		::System::Void PopNode(::Sirenix::Serialization::BufferedString& name)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::BufferedString&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_POPNODE_OFFSET))(this, name);
		}

		::System::Void PopArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_POPARRAY_OFFSET))(this);
		}

		::System::Void ClearNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BASEDATAREADERWRITER_CLEARNODES_OFFSET))(this);
		}
	};
}
