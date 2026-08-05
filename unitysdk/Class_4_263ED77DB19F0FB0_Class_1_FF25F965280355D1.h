#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_263ED77DB19F0FB0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_263ED77DB19F0FB0_CLASS_1_FF25F965280355D1__CTOR_OFFSET UNITYSDK_OFFSET(0x170067F0)

inline static constexpr unsigned int Class_4_263ED77DB19F0FB0_Class_1_FF25F965280355D1_TypeDefinitionIndex = 88402;

class Class_4_263ED77DB19F0FB0_Class_1_FF25F965280355D1 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_6; // 0x40
	::Class_4_263ED77DB19F0FB0* Field_1_4; // 0x48
	::Struct_2_25290555339097B0 Field_1_10; // 0x50
	::System::Int32 Field_1_5; // 0x78
	::System::Int32 Field_1_11; // 0x7C
	::System::Single Field_1_0; // 0x80
	::System::Int32 Field_1_7; // 0x84
	::System::Int32 Field_1_8; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_CLASS_1_FF25F965280355D1__CTOR_OFFSET))(this);
	}
};
