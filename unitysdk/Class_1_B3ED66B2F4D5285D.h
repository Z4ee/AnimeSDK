#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_B3ED66B2F4D5285D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C30FD0)
#define CLASS_1_B3ED66B2F4D5285D_METHOD_1_F4BE962E72F8D312_OFFSET UNITYSDK_OFFSET(0x18C311B0)
#define CLASS_1_B3ED66B2F4D5285D__CTOR_OFFSET UNITYSDK_OFFSET(0x18C30E90)

inline static constexpr unsigned int Class_1_B3ED66B2F4D5285D_TypeDefinitionIndex = 69331;

class Class_1_B3ED66B2F4D5285D : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_0; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::Enum_3_DFCB42601400F441 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B3ED66B2F4D5285D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3ED66B2F4D5285D_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_F4BE962E72F8D312()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3ED66B2F4D5285D_METHOD_1_F4BE962E72F8D312_OFFSET))(this);
	}
};
