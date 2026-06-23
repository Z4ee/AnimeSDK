#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_A292D09112D1EC5F;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_298;

#define CLASS_3_A292D09112D1EC5F_STRUCT_2_4C17A06BCB416D0E_INVOKE_OFFSET UNITYSDK_OFFSET(0x9700E0)

inline static constexpr unsigned int Class_3_A292D09112D1EC5F_Struct_2_4C17A06BCB416D0E_TypeDefinitionIndex = 42953;

struct alignas(8) Class_3_A292D09112D1EC5F_Struct_2_4C17A06BCB416D0E
{
	::Class_0_16E4307DCC419505_298<::Class_3_A292D09112D1EC5F_Struct_2_4C17A06BCB416D0E>* Field_2_0; // 0x10
	::Class_3_A292D09112D1EC5F* Field_2_1; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Int32 Field_2_5; // 0x3C

	/*
	::System::Void Invoke(::System::String* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_STRUCT_2_4C17A06BCB416D0E_INVOKE_OFFSET))(this, a1, a2);
	}
	*/
};
