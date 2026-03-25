#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E750E5E5D854E770;
class Class_2_F3767A4B54C896F8;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_F3767A4B54C896F8_CLASS_1_2C3C4102E0261131_METHOD_1_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0x1659FF30)
#define CLASS_2_F3767A4B54C896F8_CLASS_1_2C3C4102E0261131__CTOR_OFFSET UNITYSDK_OFFSET(0x1659FF20)

inline static constexpr unsigned int Class_2_F3767A4B54C896F8_Class_1_2C3C4102E0261131_TypeDefinitionIndex = 32188;

class Class_2_F3767A4B54C896F8_Class_1_2C3C4102E0261131 : public ::System::Object
{
public:
	::Class_2_F3767A4B54C896F8* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_F3767A4B54C896F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3767A4B54C896F8*))((::PBYTE)hIl2Cpp + CLASS_2_F3767A4B54C896F8_CLASS_1_2C3C4102E0261131__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_E750E5E5D854E770*>* Method_1_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_E750E5E5D854E770*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3767A4B54C896F8_CLASS_1_2C3C4102E0261131_METHOD_1_4E0CCFC7E8FEF732_OFFSET))(this);
	}
};
