#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_2C37E1F4F32A068C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1281D390)
#define CLASS_1_2C37E1F4F32A068C_METHOD_1_0944F04859AEAECC_OFFSET UNITYSDK_OFFSET(0x1281D5D0)
#define CLASS_1_2C37E1F4F32A068C__CTOR_OFFSET UNITYSDK_OFFSET(0x1281D5C0)

inline static constexpr unsigned int Class_1_2C37E1F4F32A068C_TypeDefinitionIndex = 59145;

class Class_1_2C37E1F4F32A068C : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_0; // 0x18
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C37E1F4F32A068C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C37E1F4F32A068C_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_0944F04859AEAECC()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C37E1F4F32A068C_METHOD_1_0944F04859AEAECC_OFFSET))(this);
	}
};
