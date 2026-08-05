#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_53.h"

class Class_1_0FE1A761F8FE7402;
class Class_1_7AB88D713F5121B3;
class Class_1_9D03B8D96AD00B39;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_94A498DBC0635E6A_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x1BB80D70)
#define CLASS_2_94A498DBC0635E6A_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x1BB80A30)
#define CLASS_2_94A498DBC0635E6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB80CE0)
#define CLASS_2_94A498DBC0635E6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB80BB0)

inline static constexpr unsigned int Class_2_94A498DBC0635E6A_TypeDefinitionIndex = 68390;

class Class_2_94A498DBC0635E6A : public ::Class_1_43BD383C98B4C0C5_53
{
public:
	::System::Collections::Generic::List_1<::Class_1_9D03B8D96AD00B39*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0FE1A761F8FE7402*>* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3*>* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A498DBC0635E6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A498DBC0635E6A_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A498DBC0635E6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_94A498DBC0635E6A* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_94A498DBC0635E6A*(*)())((::PBYTE)hIl2Cpp + CLASS_2_94A498DBC0635E6A_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}
};
