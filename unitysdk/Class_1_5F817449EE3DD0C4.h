#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_4;
class Class_3_B3B7AD2B34783116;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5F817449EE3DD0C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C9F080)
#define CLASS_1_5F817449EE3DD0C4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13C9F130)
#define CLASS_1_5F817449EE3DD0C4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x13C9F140)
#define CLASS_1_5F817449EE3DD0C4__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9EFE0)

inline static constexpr unsigned int Class_1_5F817449EE3DD0C4_TypeDefinitionIndex = 72307;

class Class_1_5F817449EE3DD0C4 : public ::System::Object
{
public:
	::Class_1_3D46C5D064952E16_4* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_B3B7AD2B34783116*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_3D46C5D064952E16_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D46C5D064952E16_4*))((::PBYTE)hIl2Cpp + CLASS_1_5F817449EE3DD0C4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F817449EE3DD0C4_DISPOSE_OFFSET))(this);
	}

	::Class_1_3D46C5D064952E16_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3D46C5D064952E16_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F817449EE3DD0C4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3D46C5D064952E16_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D46C5D064952E16_4*))((::PBYTE)hIl2Cpp + CLASS_1_5F817449EE3DD0C4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
