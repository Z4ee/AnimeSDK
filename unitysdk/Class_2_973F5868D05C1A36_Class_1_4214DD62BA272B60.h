#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DD13EF76A290F8EF;
class Class_2_973F5868D05C1A36_Class_1_59DEDD8926B93654;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60_METHOD_1_E0B410E360302D1D_OFFSET UNITYSDK_OFFSET(0x15083280)
#define CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60_METHOD_1_E6E07151E4BDC5EF_OFFSET UNITYSDK_OFFSET(0x15083320)
#define CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60__CTOR_OFFSET UNITYSDK_OFFSET(0x15083270)

inline static constexpr unsigned int Class_2_973F5868D05C1A36_Class_1_4214DD62BA272B60_TypeDefinitionIndex = 51627;

class Class_2_973F5868D05C1A36_Class_1_4214DD62BA272B60 : public ::System::Object
{
public:
	::Class_2_973F5868D05C1A36_Class_1_59DEDD8926B93654* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_1; // 0x18
	::Class_1_DD13EF76A290F8EF* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E0B410E360302D1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60_METHOD_1_E0B410E360302D1D_OFFSET))(this);
	}

	::System::Void Method_1_E6E07151E4BDC5EF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_CLASS_1_4214DD62BA272B60_METHOD_1_E6E07151E4BDC5EF_OFFSET))(this, a1);
	}
};
