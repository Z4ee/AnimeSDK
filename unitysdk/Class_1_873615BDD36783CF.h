#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_070A00258D76D4EF.h"
#include "unitysdk/Struct_2_85609C8D1B5CE8E3.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_873615BDD36783CF_METHOD_1_2E4C17A83A133A34_OFFSET UNITYSDK_OFFSET(0x17C4A0A0)
#define CLASS_1_873615BDD36783CF_METHOD_1_B1B69864A6408CDE_OFFSET UNITYSDK_OFFSET(0x17C49700)

inline static constexpr unsigned int Class_1_873615BDD36783CF_TypeDefinitionIndex = 59415;

class Class_1_873615BDD36783CF : public ::System::Object
{
public:
	static ::System::Boolean Method_1_B1B69864A6408CDE(::System::Collections::Generic::IList_1<::Struct_2_070A00258D76D4EF>* a1, ::Struct_2_F213AC3D3FBF57B9& a2, ::Struct_2_85609C8D1B5CE8E3& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::Struct_2_070A00258D76D4EF>*, ::Struct_2_F213AC3D3FBF57B9&, ::Struct_2_85609C8D1B5CE8E3&))((::PBYTE)hIl2Cpp + CLASS_1_873615BDD36783CF_METHOD_1_B1B69864A6408CDE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2E4C17A83A133A34(::Struct_2_85609C8D1B5CE8E3 a1)
	{
		return ((::System::Void(*)(::Struct_2_85609C8D1B5CE8E3))((::PBYTE)hIl2Cpp + CLASS_1_873615BDD36783CF_METHOD_1_2E4C17A83A133A34_OFFSET))(a1);
	}
};
