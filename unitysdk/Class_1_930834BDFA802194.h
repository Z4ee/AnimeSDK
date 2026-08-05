#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_1_930834BDFA802194_Class_1_1D330977375D1C2F;
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_930834BDFA802194_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EDC470)
#define CLASS_1_930834BDFA802194_METHOD_1_F4BE962E72F8D312_OFFSET UNITYSDK_OFFSET(0x14EDC7C0)
#define CLASS_1_930834BDFA802194__CTOR_OFFSET UNITYSDK_OFFSET(0x14EDC7B0)

inline static constexpr unsigned int Class_1_930834BDFA802194_TypeDefinitionIndex = 65337;

class Class_1_930834BDFA802194 : public ::System::Object
{
public:
	::Class_1_BBE667D4A3124D9B<::Class_1_1685EC66FBD28897*>* Field_1_5; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_7; // 0x18
	::Class_1_BBE667D4A3124D9B<::Class_1_930834BDFA802194_Class_1_1D330977375D1C2F*>* Field_1_6; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_930834BDFA802194__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_930834BDFA802194_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_F4BE962E72F8D312()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_930834BDFA802194_METHOD_1_F4BE962E72F8D312_OFFSET))(this);
	}
};
