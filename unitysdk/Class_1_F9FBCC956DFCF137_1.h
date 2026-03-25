#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

class Class_1_96F671E4E83A73C0;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F9FBCC956DFCF137_1_METHOD_1_4ECDFE53EE41D31A_OFFSET UNITYSDK_OFFSET(0x1837B5E0)
#define CLASS_1_F9FBCC956DFCF137_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1837B5D0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_1_TypeDefinitionIndex = 34017;

class Class_1_F9FBCC956DFCF137_1 : public ::System::Object
{
public:
	::Class_1_96F671E4E83A73C0* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_1__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>* Method_1_4ECDFE53EE41D31A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_1_METHOD_1_4ECDFE53EE41D31A_OFFSET))(this);
	}
};
