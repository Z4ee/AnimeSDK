#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_46FD925988407D1E;

#define CLASS_1_1FB256EC3633CF9E_GET_CATENTITY_OFFSET UNITYSDK_OFFSET(0xA98C280)
#define CLASS_1_1FB256EC3633CF9E_GET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xA98C2C0)
#define CLASS_1_1FB256EC3633CF9E_GET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xA98C2A0)
#define CLASS_1_1FB256EC3633CF9E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA98B820)
#define CLASS_1_1FB256EC3633CF9E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA98C2E0)
#define CLASS_1_1FB256EC3633CF9E_SET_CATENTITY_OFFSET UNITYSDK_OFFSET(0xA98C290)
#define CLASS_1_1FB256EC3633CF9E_SET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xA98C2D0)
#define CLASS_1_1FB256EC3633CF9E_SET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xA98C2B0)
#define CLASS_1_1FB256EC3633CF9E__CTOR_OFFSET UNITYSDK_OFFSET(0xA98B7D0)

inline static constexpr unsigned int Class_1_1FB256EC3633CF9E_TypeDefinitionIndex = 72504;

class Class_1_1FB256EC3633CF9E : public ::System::Object
{
public:
	::Class_2_46FD925988407D1E* _CatEntity_k__BackingField; // 0x10
	::System::Int64 _EndTimeMs_k__BackingField; // 0x18
	::System::Int64 _StartTimeMs_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E__CTOR_OFFSET))(this);
	}

	::Class_2_46FD925988407D1E* get_CatEntity()
	{
		return ((::Class_2_46FD925988407D1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_GET_CATENTITY_OFFSET))(this);
	}

	::System::Void set_CatEntity(::Class_2_46FD925988407D1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_SET_CATENTITY_OFFSET))(this, a1);
	}

	::System::Int64 get_StartTimeMs()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_GET_STARTTIMEMS_OFFSET))(this);
	}

	::System::Void set_StartTimeMs(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_SET_STARTTIMEMS_OFFSET))(this, a1);
	}

	::System::Int64 get_EndTimeMs()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_GET_ENDTIMEMS_OFFSET))(this);
	}

	::System::Void set_EndTimeMs(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_SET_ENDTIMEMS_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FB256EC3633CF9E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
