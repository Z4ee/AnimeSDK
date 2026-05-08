#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_891.h"

class Class_2_208CC9941471731A_1052;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FEEAB8D008883D70_METHOD_2_100FC5C62356F0DF_OFFSET UNITYSDK_OFFSET(0x1BEABC30)
#define CLASS_2_FEEAB8D008883D70_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1BEAC2B0)
#define CLASS_2_FEEAB8D008883D70_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1BEA1BE0)
#define CLASS_2_FEEAB8D008883D70_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1BEABEA0)
#define CLASS_2_FEEAB8D008883D70_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BEABB60)
#define CLASS_2_FEEAB8D008883D70__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEABBA0)

inline static constexpr unsigned int Class_2_FEEAB8D008883D70_TypeDefinitionIndex = 83260;

class Class_2_FEEAB8D008883D70 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1052*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_891 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1052* Method_2_100FC5C62356F0DF(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1052*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70_METHOD_2_100FC5C62356F0DF_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1052* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1052*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEEAB8D008883D70_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
