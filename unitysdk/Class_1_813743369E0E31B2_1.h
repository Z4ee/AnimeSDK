#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
namespace System { class String; }

#define CLASS_1_813743369E0E31B2_1_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x10CE14D0)
#define CLASS_1_813743369E0E31B2_1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10CE14A0)
#define CLASS_1_813743369E0E31B2_1_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x10CE1480)
#define CLASS_1_813743369E0E31B2_1_METHOD_1_9366A45A7F8C802A_OFFSET UNITYSDK_OFFSET(0x10CE13D0)
#define CLASS_1_813743369E0E31B2_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10CE14C0)
#define CLASS_1_813743369E0E31B2_1_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10CE14B0)
#define CLASS_1_813743369E0E31B2_1_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x10CE1490)
#define CLASS_1_813743369E0E31B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE1470)

inline static constexpr unsigned int Class_1_813743369E0E31B2_1_TypeDefinitionIndex = 59097;

class Class_1_813743369E0E31B2_1 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _NodeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_813743369E0E31B2_1* Method_1_9366A45A7F8C802A(::Class_1_02D30900317D93FD* a1)
	{
		return ((::Class_1_813743369E0E31B2_1*(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_METHOD_1_9366A45A7F8C802A_OFFSET))(a1);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_NODEID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
	}
};
