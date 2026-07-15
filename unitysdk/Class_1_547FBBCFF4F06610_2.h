#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_547FBBCFF4F06610_2_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x15EE70E0)
#define CLASS_1_547FBBCFF4F06610_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EE7190)
#define CLASS_1_547FBBCFF4F06610_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE7180)

inline static constexpr unsigned int Class_1_547FBBCFF4F06610_2_TypeDefinitionIndex = 45925;

class Class_1_547FBBCFF4F06610_2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_547FBBCFF4F06610_2_TypeDefinitionIndex)->GetStaticField(0x600E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_547FBBCFF4F06610_2_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
