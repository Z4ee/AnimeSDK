#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A2214CB804D79252;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3BE45E89EFDF5077_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x177FDBB0)
#define CLASS_1_3BE45E89EFDF5077_METHOD_1_74910735C236A03E_OFFSET UNITYSDK_OFFSET(0x177FDE00)
#define CLASS_1_3BE45E89EFDF5077__CTOR_OFFSET UNITYSDK_OFFSET(0x177FDB20)

inline static constexpr unsigned int Class_1_3BE45E89EFDF5077_TypeDefinitionIndex = 84423;

class Class_1_3BE45E89EFDF5077 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_A2214CB804D79252*>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BE45E89EFDF5077__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BE45E89EFDF5077_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_74910735C236A03E(::System::UInt32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BE45E89EFDF5077_METHOD_1_74910735C236A03E_OFFSET))(this, a1, a2, a3, a4);
	}
};
