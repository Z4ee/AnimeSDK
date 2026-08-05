#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DAE90)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DAE00)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DAF70)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E6DADA0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1E6DADC0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x1E6DADE0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E6DADB0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1E6DADD0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x1E6DADF0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB090)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int FCCallKey_TypeDefinitionIndex = 29931;

	class FCCallKey : public ::System::Object
	{
	public:
		::System::String* _PortName_k__BackingField; // 0x10
		::System::String* _NodeName_k__BackingField; // 0x18
		::System::UInt64 _NodeId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_NodeId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODEID_OFFSET))(this, value);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODENAME_OFFSET))(this);
		}

		::System::Void set_NodeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODENAME_OFFSET))(this, value);
		}

		::System::String* get_PortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_PORTNAME_OFFSET))(this);
		}

		::System::Void set_PortName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_PORTNAME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::NodeCanvas::Framework::FCCallKey* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::FCCallKey*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
