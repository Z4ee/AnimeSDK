#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_431;
class Class_1_3912AC4C4B891816_Class_1_670FA992BFDAB561;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3912AC4C4B891816_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0xB5255D0)
#define CLASS_1_3912AC4C4B891816_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xB525990)
#define CLASS_1_3912AC4C4B891816_METHOD_1_B0107CA04AF587E9_OFFSET UNITYSDK_OFFSET(0xB525460)
#define CLASS_1_3912AC4C4B891816_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0xB525930)
#define CLASS_1_3912AC4C4B891816__CCTOR_OFFSET UNITYSDK_OFFSET(0xB525D70)

inline static constexpr unsigned int Class_1_3912AC4C4B891816_TypeDefinitionIndex = 61133;

class Class_1_3912AC4C4B891816 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_3912AC4C4B891816_Class_1_670FA992BFDAB561*>*>** StaticGet_NPIPNPBCKGF()
	{
		return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_3912AC4C4B891816_Class_1_670FA992BFDAB561*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3912AC4C4B891816_TypeDefinitionIndex)->GetStaticField(0x5E3C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3912AC4C4B891816__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_431* Method_1_B0107CA04AF587E9()
	{
		return ((::Class_0_16E4307DCC419505_431*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3912AC4C4B891816_METHOD_1_B0107CA04AF587E9_OFFSET))();
	}

	static ::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3912AC4C4B891816_METHOD_1_4679E7840A7526E1_OFFSET))();
	}

	static ::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3912AC4C4B891816_METHOD_1_E727F9956B5BD78B_OFFSET))();
	}

	static ::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3912AC4C4B891816_METHOD_1_8D61BE16C9463302_OFFSET))();
	}
};
