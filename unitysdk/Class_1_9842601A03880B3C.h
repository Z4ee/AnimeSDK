#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4252C4B7F9BB7BE7;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9842601A03880B3C_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x137601E0)
#define CLASS_1_9842601A03880B3C_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13762C60)
#define CLASS_1_9842601A03880B3C_METHOD_1_ABEAAEAC9CCB6E31_OFFSET UNITYSDK_OFFSET(0x13760090)
#define CLASS_1_9842601A03880B3C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1375FFF0)

inline static constexpr unsigned int Class_1_9842601A03880B3C_TypeDefinitionIndex = 40461;

class Class_1_9842601A03880B3C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_4252C4B7F9BB7BE7*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_4252C4B7F9BB7BE7*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9842601A03880B3C_TypeDefinitionIndex)->GetStaticField(0x4F370);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9842601A03880B3C__CCTOR_OFFSET))();
	}

	static ::Class_1_4252C4B7F9BB7BE7* Method_1_ABEAAEAC9CCB6E31(::System::Int32 a1)
	{
		return ((::Class_1_4252C4B7F9BB7BE7*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9842601A03880B3C_METHOD_1_ABEAAEAC9CCB6E31_OFFSET))(a1);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9842601A03880B3C_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9842601A03880B3C_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
