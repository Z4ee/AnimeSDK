#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_345;
class Class_1_975D944CE3BB299D_Class_1_670FA992BFDAB561_1;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_975D944CE3BB299D_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x1581EFA0)
#define CLASS_1_975D944CE3BB299D_METHOD_1_B0107CA04AF587E9_OFFSET UNITYSDK_OFFSET(0x1581EE30)
#define CLASS_1_975D944CE3BB299D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1581F4B0)

inline static constexpr unsigned int Class_1_975D944CE3BB299D_TypeDefinitionIndex = 79211;

class Class_1_975D944CE3BB299D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_975D944CE3BB299D_Class_1_670FA992BFDAB561_1*>*>** StaticGet_NPIPNPBCKGF()
	{
		return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_975D944CE3BB299D_Class_1_670FA992BFDAB561_1*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_975D944CE3BB299D_TypeDefinitionIndex)->GetStaticField(0x55E80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_975D944CE3BB299D__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_345* Method_1_B0107CA04AF587E9()
	{
		return ((::Class_0_16E4307DCC419505_345*(*)())((::PBYTE)hIl2Cpp + CLASS_1_975D944CE3BB299D_METHOD_1_B0107CA04AF587E9_OFFSET))();
	}

	static ::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_975D944CE3BB299D_METHOD_1_AA7E3074254D484A_OFFSET))();
	}
};
