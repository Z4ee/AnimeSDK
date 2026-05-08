#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_539.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1064;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_5D2443289877CCC9_METHOD_2_2C13E1511DB5EBC0_OFFSET UNITYSDK_OFFSET(0x1BBC2DE0)
#define CLASS_2_5D2443289877CCC9_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1BBC3670)
#define CLASS_2_5D2443289877CCC9_METHOD_2_52E2BE632E6F7F74_OFFSET UNITYSDK_OFFSET(0x1BBC3070)
#define CLASS_2_5D2443289877CCC9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BBC28A0)
#define CLASS_2_5D2443289877CCC9_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1BBC2E90)
#define CLASS_2_5D2443289877CCC9_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1BBC2B30)
#define CLASS_2_5D2443289877CCC9_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1BBC3190)
#define CLASS_2_5D2443289877CCC9_METHOD_2_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x1BBC2D50)
#define CLASS_2_5D2443289877CCC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC28E0)

inline static constexpr unsigned int Class_2_5D2443289877CCC9_TypeDefinitionIndex = 83097;

class Class_2_5D2443289877CCC9 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1064*>* Field_2_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*>* Field_2_2; // 0x30
	::Struct_2_1862835F8661A21F_539 Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Int32 Method_2_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1064* Method_2_2C13E1511DB5EBC0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_1064*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_2C13E1511DB5EBC0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>* Method_2_52E2BE632E6F7F74(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_52E2BE632E6F7F74_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1064* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1064*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D2443289877CCC9_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}
};
