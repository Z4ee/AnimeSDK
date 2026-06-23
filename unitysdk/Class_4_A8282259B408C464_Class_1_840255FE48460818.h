#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_A8282259B408C464;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_A8282259B408C464_CLASS_1_840255FE48460818__CTOR_OFFSET UNITYSDK_OFFSET(0x1390F2E0)

inline static constexpr unsigned int Class_4_A8282259B408C464_Class_1_840255FE48460818_TypeDefinitionIndex = 43251;

class Class_4_A8282259B408C464_Class_1_840255FE48460818 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x48
	::Class_4_A8282259B408C464* Field_1_0; // 0x78
	::System::UInt32 Field_1_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8282259B408C464_CLASS_1_840255FE48460818__CTOR_OFFSET))(this);
	}
};
