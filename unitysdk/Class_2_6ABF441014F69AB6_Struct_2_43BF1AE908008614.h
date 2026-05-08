#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_6ABF441014F69AB6;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_22;

#define CLASS_2_6ABF441014F69AB6_STRUCT_2_43BF1AE908008614_INVOKE_OFFSET UNITYSDK_OFFSET(0x633460)

inline static constexpr unsigned int Class_2_6ABF441014F69AB6_Struct_2_43BF1AE908008614_TypeDefinitionIndex = 64752;

struct alignas(8) Class_2_6ABF441014F69AB6_Struct_2_43BF1AE908008614
{
	::Class_0_16E4307DCC41950C_22<::Class_2_6ABF441014F69AB6_Struct_2_43BF1AE908008614>* Field_2_0; // 0x10
	::Class_2_6ABF441014F69AB6* Field_2_1; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Int32 Field_2_5; // 0x3C

	/*
	::System::Void Invoke(::System::String* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_STRUCT_2_43BF1AE908008614_INVOKE_OFFSET))(this, a1, a2);
	}
	*/
};
