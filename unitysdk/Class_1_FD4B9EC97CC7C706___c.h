#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FD4B9EC97CC7C706___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C7060)
#define CLASS_1_FD4B9EC97CC7C706___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114C70A0)
#define CLASS_1_FD4B9EC97CC7C706___C__INITTEMPDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x114C70B0)

inline static constexpr unsigned int Class_1_FD4B9EC97CC7C706___c_TypeDefinitionIndex = 64026;

class Class_1_FD4B9EC97CC7C706___c : public ::System::Object
{
public:
	static ::Class_1_FD4B9EC97CC7C706___c** StaticGet___9()
	{
		return (::Class_1_FD4B9EC97CC7C706___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4B9EC97CC7C706___c_TypeDefinitionIndex)->GetStaticField(0x36E40);
	}
	static ::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4B9EC97CC7C706___c_TypeDefinitionIndex)->GetStaticField(0x36E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _InitTempData_b__17_0(::System::Tuple_2<::System::UInt32, ::System::Single>* a, ::System::Tuple_2<::System::UInt32, ::System::Single>* b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::System::Single>*, ::System::Tuple_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706___C__INITTEMPDATA_B__17_0_OFFSET))(this, a, b);
	}
};
