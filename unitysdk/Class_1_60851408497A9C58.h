#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_59;
class Class_3_3B42BC0680587011;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_B8F2A25A5ADF5CEE;
class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_60851408497A9C58_METHOD_1_454629D93124257A_OFFSET UNITYSDK_OFFSET(0x13BAFDD0)
#define CLASS_1_60851408497A9C58_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13BB02C0)
#define CLASS_1_60851408497A9C58_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13BB02B0)
#define CLASS_1_60851408497A9C58__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BAFDC0)
#define CLASS_1_60851408497A9C58__CTOR_OFFSET UNITYSDK_OFFSET(0x13BAFD40)

inline static constexpr unsigned int Class_1_60851408497A9C58_TypeDefinitionIndex = 50740;

class Class_1_60851408497A9C58 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_60851408497A9C58_TypeDefinitionIndex)->GetStaticField(0xE890);
	}
	::Class_1_43BD383C98B4C0C5_59* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_4; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_59* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60851408497A9C58__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60851408497A9C58__CCTOR_OFFSET))();
	}

	::System::Void Method_1_454629D93124257A(::Class_3_B8F2A25A5ADF5CEE* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_883E597458B91E77* a3, ::Class_3_DFD5D1FDB9D2A4AC* a4, ::Class_3_3B42BC0680587011* a5, ::Class_3_AA6DF3A878195D3F* a6, ::Class_3_D2084E0C2DD39509* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B8F2A25A5ADF5CEE*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B42BC0680587011*, ::Class_3_AA6DF3A878195D3F*, ::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_1_60851408497A9C58_METHOD_1_454629D93124257A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60851408497A9C58_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_60851408497A9C58_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
