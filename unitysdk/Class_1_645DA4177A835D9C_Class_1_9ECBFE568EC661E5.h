#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace System { class String; }

#define CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5_METHOD_1_48BE260CBBBC7A6C_OFFSET UNITYSDK_OFFSET(0x13CEBDF0)
#define CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x13CEBDB0)
#define CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5__CTOR_OFFSET UNITYSDK_OFFSET(0x13CEBD40)

inline static constexpr unsigned int Class_1_645DA4177A835D9C_Class_1_9ECBFE568EC661E5_TypeDefinitionIndex = 39616;

class Class_1_645DA4177A835D9C_Class_1_9ECBFE568EC661E5 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Boolean Method_1_48BE260CBBBC7A6C(::Class_1_F57D00757009D1EB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + CLASS_1_645DA4177A835D9C_CLASS_1_9ECBFE568EC661E5_METHOD_1_48BE260CBBBC7A6C_OFFSET))(this, a1);
	}
};
