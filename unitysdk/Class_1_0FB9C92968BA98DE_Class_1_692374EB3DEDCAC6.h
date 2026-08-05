#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0FB9C92968BA98DE_CLASS_1_692374EB3DEDCAC6__CTOR_OFFSET UNITYSDK_OFFSET(0x18E504F0)

inline static constexpr unsigned int Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6_TypeDefinitionIndex = 67315;

class Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A47ACAABA9AAFE92>* Field_1_1; // 0x10
	::System::Boolean Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB9C92968BA98DE_CLASS_1_692374EB3DEDCAC6__CTOR_OFFSET))(this);
	}
};
