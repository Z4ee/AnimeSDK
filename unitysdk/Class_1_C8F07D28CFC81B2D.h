#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_105;
class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D2084E0C2DD39509;
class Class_3_F33F9DC5F4112336;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8F07D28CFC81B2D_METHOD_1_0166AED857993F9E_OFFSET UNITYSDK_OFFSET(0x13A77480)
#define CLASS_1_C8F07D28CFC81B2D_METHOD_1_7138788FAB5C0A46_OFFSET UNITYSDK_OFFSET(0x13A77900)
#define CLASS_1_C8F07D28CFC81B2D_METHOD_1_7C971CAFDD67910C_OFFSET UNITYSDK_OFFSET(0x13A77A80)
#define CLASS_1_C8F07D28CFC81B2D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13A77A60)
#define CLASS_1_C8F07D28CFC81B2D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A77A70)
#define CLASS_1_C8F07D28CFC81B2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A77470)
#define CLASS_1_C8F07D28CFC81B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A773E0)

inline static constexpr unsigned int Class_1_C8F07D28CFC81B2D_TypeDefinitionIndex = 75299;

class Class_1_C8F07D28CFC81B2D : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8F07D28CFC81B2D_TypeDefinitionIndex)->GetStaticField(0x12AB0);
	}
	::Class_1_43BD383C98B4C0C5_105* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_11; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_105* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_105*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0166AED857993F9E(::Class_3_3B42BC0680587011* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3B42BC0680587011*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D_METHOD_1_0166AED857993F9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Void Method_1_7138788FAB5C0A46(::Class_3_F33F9DC5F4112336* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D_METHOD_1_7138788FAB5C0A46_OFFSET))(a1, a2);
	}

	::System::Void Method_1_7C971CAFDD67910C(::Class_3_707412604A129938* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_883E597458B91E77* a3, ::Class_3_C93CC3D2C2AC4067* a4, ::Class_3_3B42BC0680587011* a5, ::Class_3_AA6DF3A878195D3F* a6, ::Class_3_D2084E0C2DD39509* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*, ::Class_3_AA6DF3A878195D3F*, ::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_1_C8F07D28CFC81B2D_METHOD_1_7C971CAFDD67910C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
