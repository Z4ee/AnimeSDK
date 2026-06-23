#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

class Class_1_F66FCB6708302B87;

#define CLASS_1_DAD6F8E05B03BBFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF69010)
#define CLASS_1_DAD6F8E05B03BBFB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1CF68B00)
#define CLASS_1_DAD6F8E05B03BBFB_METHOD_1_432A4B4CF2679F51_OFFSET UNITYSDK_OFFSET(0x1CF68D30)
#define CLASS_1_DAD6F8E05B03BBFB_METHOD_1_78A802CC1B16471B_OFFSET UNITYSDK_OFFSET(0x1CF69240)
#define CLASS_1_DAD6F8E05B03BBFB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CF68AF0)
#define CLASS_1_DAD6F8E05B03BBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF68930)

inline static constexpr unsigned int Class_1_DAD6F8E05B03BBFB_TypeDefinitionIndex = 33928;

class Class_1_DAD6F8E05B03BBFB : public ::System::Object
{
public:
	::Class_1_F66FCB6708302B87* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::Class_1_F66FCB6708302B87* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F66FCB6708302B87*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::ReadOnlySpan_1<::System::Byte> Method_1_432A4B4CF2679F51()
	{
		return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB_METHOD_1_432A4B4CF2679F51_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB_DISPOSE_OFFSET))(this);
	}

	::Class_1_DAD6F8E05B03BBFB* Method_1_78A802CC1B16471B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_DAD6F8E05B03BBFB*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DAD6F8E05B03BBFB_METHOD_1_78A802CC1B16471B_OFFSET))(this, a1, a2);
	}
};
