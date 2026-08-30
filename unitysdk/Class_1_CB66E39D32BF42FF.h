#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
namespace System { class String; }

#define CLASS_1_CB66E39D32BF42FF_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x18A25770)
#define CLASS_1_CB66E39D32BF42FF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18A25710)
#define CLASS_1_CB66E39D32BF42FF_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x18A256F0)
#define CLASS_1_CB66E39D32BF42FF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18A25730)
#define CLASS_1_CB66E39D32BF42FF_METHOD_1_9366A45A7F8C802A_OFFSET UNITYSDK_OFFSET(0x18A25640)
#define CLASS_1_CB66E39D32BF42FF_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18A25720)
#define CLASS_1_CB66E39D32BF42FF_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x18A25700)
#define CLASS_1_CB66E39D32BF42FF__CTOR_OFFSET UNITYSDK_OFFSET(0x18A256E0)

inline static constexpr unsigned int Class_1_CB66E39D32BF42FF_TypeDefinitionIndex = 72090;

class Class_1_CB66E39D32BF42FF : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _NodeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF__CTOR_OFFSET))(this);
	}

	static ::Class_1_CB66E39D32BF42FF* Method_1_9366A45A7F8C802A(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::Class_1_CB66E39D32BF42FF*(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_METHOD_1_9366A45A7F8C802A_OFFSET))(a1);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_SET_NODEID_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
	}
};
