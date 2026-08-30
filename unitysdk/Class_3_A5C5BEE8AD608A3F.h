#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61AF3412AEF31413.h"

class Class_1_AC6C63F15E9794D3;
class Class_1_D8AE373904B194A5;
namespace System { class String; }

#define CLASS_3_A5C5BEE8AD608A3F_GET_PLATFORMRSP_OFFSET UNITYSDK_OFFSET(0x1A43ADB0)
#define CLASS_3_A5C5BEE8AD608A3F_GET_TRACEID_OFFSET UNITYSDK_OFFSET(0x1A43AE00)
#define CLASS_3_A5C5BEE8AD608A3F_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A43ADE0)
#define CLASS_3_A5C5BEE8AD608A3F_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A43ADC0)
#define CLASS_3_A5C5BEE8AD608A3F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A43AAC0)
#define CLASS_3_A5C5BEE8AD608A3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43A960)

inline static constexpr unsigned int Class_3_A5C5BEE8AD608A3F_TypeDefinitionIndex = 59459;

class Class_3_A5C5BEE8AD608A3F : public ::Class_2_61AF3412AEF31413
{
public:
	::Class_1_D8AE373904B194A5* _PlatformRsp_k__BackingField; // 0x90
	::System::String* _TraceID_k__BackingField; // 0x98

	::System::Void _ctor(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_D8AE373904B194A5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_D8AE373904B194A5*))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_AC6C63F15E9794D3* a1, ::Class_1_D8AE373904B194A5* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::Class_1_D8AE373904B194A5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D8AE373904B194A5* get_PlatformRsp()
	{
		return ((::Class_1_D8AE373904B194A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F_GET_PLATFORMRSP_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::String* get_TraceID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5C5BEE8AD608A3F_GET_TRACEID_OFFSET))(this);
	}
};
