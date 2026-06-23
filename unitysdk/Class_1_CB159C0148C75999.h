#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4252C4B7F9BB7BE7;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB159C0148C75999_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x16D10FC0)
#define CLASS_1_CB159C0148C75999_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16D10EB0)
#define CLASS_1_CB159C0148C75999_METHOD_1_E935551D1104082E_OFFSET UNITYSDK_OFFSET(0x16D10D60)
#define CLASS_1_CB159C0148C75999__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D10CC0)

inline static constexpr unsigned int Class_1_CB159C0148C75999_TypeDefinitionIndex = 83888;

class Class_1_CB159C0148C75999 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_4252C4B7F9BB7BE7*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_4252C4B7F9BB7BE7*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB159C0148C75999_TypeDefinitionIndex)->GetStaticField(0x3FFE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999__CCTOR_OFFSET))();
	}

	static ::Class_1_4252C4B7F9BB7BE7* Method_1_E935551D1104082E(::System::Int32 a1)
	{
		return ((::Class_1_4252C4B7F9BB7BE7*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_E935551D1104082E_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}
};
