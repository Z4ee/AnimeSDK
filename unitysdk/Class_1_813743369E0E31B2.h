#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
namespace System { class String; }

#define CLASS_1_813743369E0E31B2_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0xE65DC80)
#define CLASS_1_813743369E0E31B2_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE65DC50)
#define CLASS_1_813743369E0E31B2_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xE65DC30)
#define CLASS_1_813743369E0E31B2_METHOD_1_9366A45A7F8C802A_OFFSET UNITYSDK_OFFSET(0xE65DB80)
#define CLASS_1_813743369E0E31B2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE65DC70)
#define CLASS_1_813743369E0E31B2_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE65DC60)
#define CLASS_1_813743369E0E31B2_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xE65DC40)
#define CLASS_1_813743369E0E31B2__CTOR_OFFSET UNITYSDK_OFFSET(0xE65DC20)

inline static constexpr unsigned int Class_1_813743369E0E31B2_TypeDefinitionIndex = 66481;

class Class_1_813743369E0E31B2 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _NodeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2__CTOR_OFFSET))(this);
	}

	static ::Class_1_813743369E0E31B2* Method_1_9366A45A7F8C802A(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::Class_1_813743369E0E31B2*(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_METHOD_1_9366A45A7F8C802A_OFFSET))(a1);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_NODEID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
	}
};
