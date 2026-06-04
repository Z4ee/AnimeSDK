#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4F65C394FDC559D_METHOD_1_2578057E67207672_OFFSET UNITYSDK_OFFSET(0xACEAAC0)
#define CLASS_1_F4F65C394FDC559D_METHOD_1_8F92CD8454181950_OFFSET UNITYSDK_OFFSET(0xACEA8E0)

inline static constexpr unsigned int Class_1_F4F65C394FDC559D_TypeDefinitionIndex = 70429;

class Class_1_F4F65C394FDC559D : public ::System::Object
{
public:
	static ::System::Int32 Method_1_8F92CD8454181950(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F4F65C394FDC559D_METHOD_1_8F92CD8454181950_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_2578057E67207672(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F4F65C394FDC559D_METHOD_1_2578057E67207672_OFFSET))(a1);
	}
};
