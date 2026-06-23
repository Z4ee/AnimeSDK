#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13586CBADB3B91B7.h"

class Class_1_B353AD2F4C8AD4F8;
class Class_2_A34C06FBB99014A3;
class Class_3_5A74728607476CA3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_FE8AC49B1DE0C904_METHOD_2_1F4F7952600B2FDA_OFFSET UNITYSDK_OFFSET(0x1E839570)
#define CLASS_2_FE8AC49B1DE0C904_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1E839500)
#define CLASS_2_FE8AC49B1DE0C904_METHOD_2_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0x1E8395E0)
#define CLASS_2_FE8AC49B1DE0C904__CTOR_OFFSET UNITYSDK_OFFSET(0x1E839380)

inline static constexpr unsigned int Class_2_FE8AC49B1DE0C904_TypeDefinitionIndex = 18562;

class Class_2_FE8AC49B1DE0C904 : public ::Class_1_13586CBADB3B91B7
{
public:
	::System::Collections::Generic::IList_1<::Class_2_A34C06FBB99014A3*>* Field_2_1; // 0x28
	::Class_3_5A74728607476CA3* Field_2_0; // 0x30

	::System::Void _ctor(::Class_3_5A74728607476CA3* a1, ::Class_1_B353AD2F4C8AD4F8* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5A74728607476CA3*, ::Class_1_B353AD2F4C8AD4F8*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE8AC49B1DE0C904__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE8AC49B1DE0C904_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>* Method_2_1F4F7952600B2FDA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_13586CBADB3B91B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE8AC49B1DE0C904_METHOD_2_1F4F7952600B2FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE8AC49B1DE0C904_METHOD_2_36A43EE474699637_OFFSET))(this);
	}
};
