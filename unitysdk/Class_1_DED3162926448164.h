#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9631509AB5AD4C70.h"
#include "unitysdk/Struct_2_B8AC8CA5BC0F1E3E.h"
#include "unitysdk/System/Object.h"

class Class_1_BCFCE5B9C398A736;
class Class_1_DAD6F8E05B03BBFB;

#define CLASS_1_DED3162926448164_METHOD_1_3B37A43B0BDB4559_OFFSET UNITYSDK_OFFSET(0x1ABB1080)
#define CLASS_1_DED3162926448164_METHOD_1_A92687EA64264E74_OFFSET UNITYSDK_OFFSET(0x1ABB16B0)

inline static constexpr unsigned int Class_1_DED3162926448164_TypeDefinitionIndex = 32371;

class Class_1_DED3162926448164 : public ::System::Object
{
public:
	::Class_1_DAD6F8E05B03BBFB* Field_1_6; // 0x10
	::Class_1_BCFCE5B9C398A736* Field_1_0; // 0x18
	::System::Int64 Field_1_1; // 0x20
	::System::Int64 Field_1_3; // 0x28
	::System::Int64 Field_1_2; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Int32 Field_1_7; // 0x3C
	::System::Int64 Field_1_4; // 0x40

	::Struct_2_9631509AB5AD4C70 Method_1_3B37A43B0BDB4559(::System::Int64 a1)
	{
		return ((::Struct_2_9631509AB5AD4C70(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_DED3162926448164_METHOD_1_3B37A43B0BDB4559_OFFSET))(this, a1);
	}

	::Struct_2_B8AC8CA5BC0F1E3E<::Class_1_DAD6F8E05B03BBFB*> Method_1_A92687EA64264E74(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::Struct_2_B8AC8CA5BC0F1E3E<::Class_1_DAD6F8E05B03BBFB*>(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DED3162926448164_METHOD_1_A92687EA64264E74_OFFSET))(this, a1, a2);
	}
};
