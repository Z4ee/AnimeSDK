#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03EB5D6C771FDB13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_00A09DF5C40545D1_METHOD_1_016C8341F6A3521E_OFFSET UNITYSDK_OFFSET(0x92F2840)
#define CLASS_1_00A09DF5C40545D1__CTOR_OFFSET UNITYSDK_OFFSET(0x92F2A40)

inline static constexpr unsigned int Class_1_00A09DF5C40545D1_TypeDefinitionIndex = 56628;

class Class_1_00A09DF5C40545D1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_03EB5D6C771FDB13*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A09DF5C40545D1__CTOR_OFFSET))(this);
	}

	::Class_1_03EB5D6C771FDB13* Method_1_016C8341F6A3521E(::System::UInt32 a1)
	{
		return ((::Class_1_03EB5D6C771FDB13*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_00A09DF5C40545D1_METHOD_1_016C8341F6A3521E_OFFSET))(this, a1);
	}
};
