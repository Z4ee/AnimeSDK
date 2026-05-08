#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C6B63E29A82327F2;
class Class_2_E621E51D351EB960;
class Class_3_E665773526DA81A8;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E621E51D351EB960_CLASS_1_69C64BD80F90C5B2_COMPARE_OFFSET UNITYSDK_OFFSET(0x12ABD790)
#define CLASS_2_E621E51D351EB960_CLASS_1_69C64BD80F90C5B2__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABD3D0)

inline static constexpr unsigned int Class_2_E621E51D351EB960_Class_1_69C64BD80F90C5B2_TypeDefinitionIndex = 54278;

class Class_2_E621E51D351EB960_Class_1_69C64BD80F90C5B2 : public ::System::Object
{
public:
	::Class_2_E621E51D351EB960* Field_1_0; // 0x10
	::System::Collections::Generic::IList_1<::Class_3_E665773526DA81A8*>* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_69C64BD80F90C5B2__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_C6B63E29A82327F2* a1, ::Class_2_C6B63E29A82327F2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C6B63E29A82327F2*, ::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_69C64BD80F90C5B2_COMPARE_OFFSET))(this, a1, a2);
	}
};
