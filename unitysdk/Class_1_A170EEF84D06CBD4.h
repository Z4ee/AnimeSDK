#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_15E317187C4E8254;

#define CLASS_1_A170EEF84D06CBD4_GET_CATENTITY_OFFSET UNITYSDK_OFFSET(0x8C35CE0)
#define CLASS_1_A170EEF84D06CBD4_GET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0x8C35D20)
#define CLASS_1_A170EEF84D06CBD4_GET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0x8C35D00)
#define CLASS_1_A170EEF84D06CBD4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8C35D90)
#define CLASS_1_A170EEF84D06CBD4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C35D40)
#define CLASS_1_A170EEF84D06CBD4_SET_CATENTITY_OFFSET UNITYSDK_OFFSET(0x8C35CF0)
#define CLASS_1_A170EEF84D06CBD4_SET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0x8C35D30)
#define CLASS_1_A170EEF84D06CBD4_SET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0x8C35D10)
#define CLASS_1_A170EEF84D06CBD4__CTOR_OFFSET UNITYSDK_OFFSET(0x8C35DD0)

inline static constexpr unsigned int Class_1_A170EEF84D06CBD4_TypeDefinitionIndex = 63442;

class Class_1_A170EEF84D06CBD4 : public ::System::Object
{
public:
	::Class_2_15E317187C4E8254* _CatEntity_k__BackingField; // 0x10
	::System::Int64 _StartTimeMs_k__BackingField; // 0x18
	::System::Int64 _EndTimeMs_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4__CTOR_OFFSET))(this);
	}

	::Class_2_15E317187C4E8254* get_CatEntity()
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_GET_CATENTITY_OFFSET))(this);
	}

	::System::Void set_CatEntity(::Class_2_15E317187C4E8254* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_SET_CATENTITY_OFFSET))(this, value);
	}

	::System::Int64 get_StartTimeMs()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_GET_STARTTIMEMS_OFFSET))(this);
	}

	::System::Void set_StartTimeMs(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_SET_STARTTIMEMS_OFFSET))(this, value);
	}

	::System::Int64 get_EndTimeMs()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_GET_ENDTIMEMS_OFFSET))(this);
	}

	::System::Void set_EndTimeMs(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_SET_ENDTIMEMS_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A170EEF84D06CBD4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
