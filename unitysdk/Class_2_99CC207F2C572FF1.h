#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1356.h"

class Class_1_C4544004F26734BD_92;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_99CC207F2C572FF1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C284860)
#define CLASS_2_99CC207F2C572FF1_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x1C284910)
#define CLASS_2_99CC207F2C572FF1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C284790)
#define CLASS_2_99CC207F2C572FF1_METHOD_2_CCAFA254FE21768F_OFFSET UNITYSDK_OFFSET(0x1C2849F0)
#define CLASS_2_99CC207F2C572FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2847D0)

inline static constexpr unsigned int Class_2_99CC207F2C572FF1_TypeDefinitionIndex = 88204;

class Class_2_99CC207F2C572FF1 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4544004F26734BD_92*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_1356 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99CC207F2C572FF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99CC207F2C572FF1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99CC207F2C572FF1_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_C4544004F26734BD_92* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_C4544004F26734BD_92*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_99CC207F2C572FF1_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCAFA254FE21768F(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_99CC207F2C572FF1_METHOD_2_CCAFA254FE21768F_OFFSET))(this, a1);
	}
};
