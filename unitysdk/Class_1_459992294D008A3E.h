#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/System/Object.h"

class Class_2_860F5474FDAB39F0;
namespace System { class String; }

#define CLASS_1_459992294D008A3E_METHOD_1_7DCA9545AA6FF653_OFFSET UNITYSDK_OFFSET(0x1C024080)
#define CLASS_1_459992294D008A3E_METHOD_1_9FEF2A2D818E0F4F_OFFSET UNITYSDK_OFFSET(0x1C023710)
#define CLASS_1_459992294D008A3E_METHOD_1_FD8C6CFCCB2E946D_OFFSET UNITYSDK_OFFSET(0x1C023940)
#define CLASS_1_459992294D008A3E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C021B80)
#define CLASS_1_459992294D008A3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C024440)

inline static constexpr unsigned int Class_1_459992294D008A3E_TypeDefinitionIndex = 40320;

class Class_1_459992294D008A3E : public ::System::Object
{
public:
	// static const ::System::Int32 LLNFCAFICCA = 0x400; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_459992294D008A3E__CTOR_OFFSET))(this);
	}

	static ::Class_2_860F5474FDAB39F0* Method_1_9FEF2A2D818E0F4F(::System::String* a1)
	{
		return ((::Class_2_860F5474FDAB39F0*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_459992294D008A3E_METHOD_1_9FEF2A2D818E0F4F_OFFSET))(a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_459992294D008A3E_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_FD8C6CFCCB2E946D(::Struct_2_2F8FC043285F98CD a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + CLASS_1_459992294D008A3E_METHOD_1_FD8C6CFCCB2E946D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DCA9545AA6FF653(::Struct_2_2F8FC043285F98CD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + CLASS_1_459992294D008A3E_METHOD_1_7DCA9545AA6FF653_OFFSET))(this, a1);
	}
};
