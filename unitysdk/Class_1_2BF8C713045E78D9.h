#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_2BF8C713045E78D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20BBE0)
#define CLASS_1_2BF8C713045E78D9_METHOD_1_7FC2558B375EBE32_OFFSET UNITYSDK_OFFSET(0xF20BEB0)
#define CLASS_1_2BF8C713045E78D9__CTOR_OFFSET UNITYSDK_OFFSET(0xF20BEA0)

inline static constexpr unsigned int Class_1_2BF8C713045E78D9_TypeDefinitionIndex = 66298;

class Class_1_2BF8C713045E78D9 : public ::System::Object
{
public:
	::Class_1_BBE667D4A3124D9B<::Class_1_1685EC66FBD28897*>* Field_1_9; // 0x10
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_4; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_11; // 0x20
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_10; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BF8C713045E78D9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BF8C713045E78D9_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_7FC2558B375EBE32()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BF8C713045E78D9_METHOD_1_7FC2558B375EBE32_OFFSET))(this);
	}
};
