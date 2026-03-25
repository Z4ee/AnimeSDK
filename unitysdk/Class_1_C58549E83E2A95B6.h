#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F77BB6F5FCE2E0B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C58549E83E2A95B6_GET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xCB49F20)
#define CLASS_1_C58549E83E2A95B6_GET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xCB49F00)
#define CLASS_1_C58549E83E2A95B6_SET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xCB49F30)
#define CLASS_1_C58549E83E2A95B6_SET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xCB49F10)
#define CLASS_1_C58549E83E2A95B6__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCB49F50)
#define CLASS_1_C58549E83E2A95B6__CTOR_OFFSET UNITYSDK_OFFSET(0xCB49F40)

inline static constexpr unsigned int Class_1_C58549E83E2A95B6_TypeDefinitionIndex = 47637;

class Class_1_C58549E83E2A95B6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* _GraphDesc_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* _Waypoints_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* a1, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* get_Waypoints()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_GET_WAYPOINTS_OFFSET))(this);
	}

	::System::Void set_Waypoints(::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_SET_WAYPOINTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* get_GraphDesc()
	{
		return ((::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_GET_GRAPHDESC_OFFSET))(this);
	}

	::System::Void set_GraphDesc(::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_SET_GRAPHDESC_OFFSET))(this, value);
	}
};
