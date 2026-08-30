#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_30656B97AF27D696.h"

class Class_1_A4D134A7DAD941E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_94D53ED1A4F327B0_METHOD_4_E6E13598D8CACFE2_OFFSET UNITYSDK_OFFSET(0xC3BBF90)
#define CLASS_4_94D53ED1A4F327B0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BC200)
#define CLASS_4_94D53ED1A4F327B0__REBUILD_OFFSET UNITYSDK_OFFSET(0xC3BC0B0)

inline static constexpr unsigned int Class_4_94D53ED1A4F327B0_TypeDefinitionIndex = 62898;

class Class_4_94D53ED1A4F327B0 : public ::Class_3_30656B97AF27D696
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94D53ED1A4F327B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_E6E13598D8CACFE2(::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>*))((::PBYTE)hIl2Cpp + CLASS_4_94D53ED1A4F327B0_METHOD_4_E6E13598D8CACFE2_OFFSET))(this, a1);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94D53ED1A4F327B0__REBUILD_OFFSET))(this);
	}
};
