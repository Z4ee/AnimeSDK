#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_01F9221F8B6A9296_CLASS_1_76F4E6FA1F9EB2F6_METHOD_1_6E8298C6C5876C8C_OFFSET UNITYSDK_OFFSET(0x10F64980)
#define CLASS_4_01F9221F8B6A9296_CLASS_1_76F4E6FA1F9EB2F6__CTOR_OFFSET UNITYSDK_OFFSET(0x10F64970)

inline static constexpr unsigned int Class_4_01F9221F8B6A9296_Class_1_76F4E6FA1F9EB2F6_TypeDefinitionIndex = 43082;

class Class_4_01F9221F8B6A9296_Class_1_76F4E6FA1F9EB2F6 : public ::System::Object
{
public:
	::System::Func_2<::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_01F9221F8B6A9296_CLASS_1_76F4E6FA1F9EB2F6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_6E8298C6C5876C8C(::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF))((::PBYTE)hIl2Cpp + CLASS_4_01F9221F8B6A9296_CLASS_1_76F4E6FA1F9EB2F6_METHOD_1_6E8298C6C5876C8C_OFFSET))(this, a1);
	}
};
