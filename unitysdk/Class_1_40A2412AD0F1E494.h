#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_431;
class Class_1_40A2412AD0F1E494_Class_1_670FA992BFDAB561_1;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40A2412AD0F1E494_METHOD_1_B0107CA04AF587E9_OFFSET UNITYSDK_OFFSET(0x15B15B00)
#define CLASS_1_40A2412AD0F1E494_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x15B15C70)
#define CLASS_1_40A2412AD0F1E494__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B16200)

inline static constexpr unsigned int Class_1_40A2412AD0F1E494_TypeDefinitionIndex = 80535;

class Class_1_40A2412AD0F1E494 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_40A2412AD0F1E494_Class_1_670FA992BFDAB561_1*>*>** StaticGet_NPIPNPBCKGF()
	{
		return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Class_1_40A2412AD0F1E494_Class_1_670FA992BFDAB561_1*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40A2412AD0F1E494_TypeDefinitionIndex)->GetStaticField(0x6C8F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40A2412AD0F1E494__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_431* Method_1_B0107CA04AF587E9()
	{
		return ((::Class_0_16E4307DCC419505_431*(*)())((::PBYTE)hIl2Cpp + CLASS_1_40A2412AD0F1E494_METHOD_1_B0107CA04AF587E9_OFFSET))();
	}

	static ::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40A2412AD0F1E494_METHOD_1_B2AF81294D9C69C7_OFFSET))();
	}
};
