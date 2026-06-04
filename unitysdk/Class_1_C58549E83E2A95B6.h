#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0E178FC9445316D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C58549E83E2A95B6_GET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xA72D890)
#define CLASS_1_C58549E83E2A95B6_GET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xA72D870)
#define CLASS_1_C58549E83E2A95B6_SET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xA72D8A0)
#define CLASS_1_C58549E83E2A95B6_SET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xA72D880)
#define CLASS_1_C58549E83E2A95B6__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA72D8C0)
#define CLASS_1_C58549E83E2A95B6__CTOR_OFFSET UNITYSDK_OFFSET(0xA72D8B0)

inline static constexpr unsigned int Class_1_C58549E83E2A95B6_TypeDefinitionIndex = 55102;

class Class_1_C58549E83E2A95B6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* _Waypoints_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* _GraphDesc_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* a1, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* get_Waypoints()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_GET_WAYPOINTS_OFFSET))(this);
	}

	::System::Void set_Waypoints(::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_SET_WAYPOINTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* get_GraphDesc()
	{
		return ((::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_GET_GRAPHDESC_OFFSET))(this);
	}

	::System::Void set_GraphDesc(::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_C58549E83E2A95B6_SET_GRAPHDESC_OFFSET))(this, a1);
	}
};
