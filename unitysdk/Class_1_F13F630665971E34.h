#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B95EFC62CEAE6E1.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_44;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F13F630665971E34_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19F95050)
#define CLASS_1_F13F630665971E34_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19F94D10)
#define CLASS_1_F13F630665971E34_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x19F95730)
#define CLASS_1_F13F630665971E34_METHOD_1_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0x19F95960)
#define CLASS_1_F13F630665971E34_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x19F94E00)
#define CLASS_1_F13F630665971E34_METHOD_1_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0x19F95800)
#define CLASS_1_F13F630665971E34_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x19F95A90)
#define CLASS_1_F13F630665971E34_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x19F94FD0)
#define CLASS_1_F13F630665971E34__CTOR_OFFSET UNITYSDK_OFFSET(0x19F94C60)

inline static constexpr unsigned int Class_1_F13F630665971E34_TypeDefinitionIndex = 75529;

class Class_1_F13F630665971E34 : public ::System::Object
{
public:
	// static const ::System::Single PNMADEKHJMF; // 0x0
	// static const ::System::String* DEAOAEDAFPJ; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>* LDCKLLMLKHO; // 0x10
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x18
	::Class_2_D55679E3C796A7AF* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_METHOD_1_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_43BD383C98B4C0C5_44* a1)
	{
		return ((::System::Void(*)(::Class_1_43BD383C98B4C0C5_44*))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Single Method_1_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13F630665971E34_METHOD_1_431B41F82025C3EE_OFFSET))(this);
	}
};
