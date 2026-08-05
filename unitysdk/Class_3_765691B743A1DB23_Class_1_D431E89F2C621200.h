#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_1A345EAE5F749316_144;
class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200_METHOD_1_2930CF74D0319421_OFFSET UNITYSDK_OFFSET(0x14E81000)
#define CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200_METHOD_1_A58C01D20C4F43C6_OFFSET UNITYSDK_OFFSET(0x14E810A0)
#define CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200__CTOR_OFFSET UNITYSDK_OFFSET(0x14E80FF0)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_D431E89F2C621200_TypeDefinitionIndex = 61595;

class Class_3_765691B743A1DB23_Class_1_D431E89F2C621200 : public ::System::Object
{
public:
	::Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B* Field_1_4; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x48
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x78
	::System::Int32 Field_1_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2930CF74D0319421(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200_METHOD_1_2930CF74D0319421_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A58C01D20C4F43C6(::System::Boolean a1, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_144*>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_D431E89F2C621200_METHOD_1_A58C01D20C4F43C6_OFFSET))(this, a1, a2);
	}
};
