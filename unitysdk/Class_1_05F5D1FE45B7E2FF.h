#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_05F5D1FE45B7E2FF_METHOD_1_1EA4534D3D762133_OFFSET UNITYSDK_OFFSET(0x9E348D0)
#define CLASS_1_05F5D1FE45B7E2FF_METHOD_1_FEC233502ADE0BCA_OFFSET UNITYSDK_OFFSET(0x9E34720)

inline static constexpr unsigned int Class_1_05F5D1FE45B7E2FF_TypeDefinitionIndex = 69617;

class Class_1_05F5D1FE45B7E2FF : public ::System::Object
{
public:
	static ::System::Int32 Method_1_FEC233502ADE0BCA(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_05F5D1FE45B7E2FF_METHOD_1_FEC233502ADE0BCA_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_1EA4534D3D762133(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_05F5D1FE45B7E2FF_METHOD_1_1EA4534D3D762133_OFFSET))(a1);
	}
};
