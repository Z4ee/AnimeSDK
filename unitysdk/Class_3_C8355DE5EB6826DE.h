#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61AF3412AEF31413.h"

class Class_1_983E3C7FD339FC5A;
class Class_1_AC6C63F15E9794D3;
namespace System { class String; }

#define CLASS_3_C8355DE5EB6826DE_GET_PLATFORMRSP_OFFSET UNITYSDK_OFFSET(0xD3523B0)
#define CLASS_3_C8355DE5EB6826DE_GET_TRACEID_OFFSET UNITYSDK_OFFSET(0xD352400)
#define CLASS_3_C8355DE5EB6826DE_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0xD3523E0)
#define CLASS_3_C8355DE5EB6826DE_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xD3523C0)
#define CLASS_3_C8355DE5EB6826DE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD352030)
#define CLASS_3_C8355DE5EB6826DE__CTOR_OFFSET UNITYSDK_OFFSET(0xD351ED0)

inline static constexpr unsigned int Class_3_C8355DE5EB6826DE_TypeDefinitionIndex = 54710;

class Class_3_C8355DE5EB6826DE : public ::Class_2_61AF3412AEF31413
{
public:
	::Class_1_983E3C7FD339FC5A* _PlatformRsp_k__BackingField; // 0x90
	::System::String* _TraceID_k__BackingField; // 0x98

	::System::Void _ctor(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_983E3C7FD339FC5A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_983E3C7FD339FC5A*))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_983E3C7FD339FC5A* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_983E3C7FD339FC5A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_983E3C7FD339FC5A* get_PlatformRsp()
	{
		return ((::Class_1_983E3C7FD339FC5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE_GET_PLATFORMRSP_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::String* get_TraceID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8355DE5EB6826DE_GET_TRACEID_OFFSET))(this);
	}
};
