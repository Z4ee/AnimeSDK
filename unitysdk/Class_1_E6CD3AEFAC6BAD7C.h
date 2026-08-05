#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6CD3AEFAC6BAD7C_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15B58AA0)
#define CLASS_1_E6CD3AEFAC6BAD7C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B58A20)

inline static constexpr unsigned int Class_1_E6CD3AEFAC6BAD7C_TypeDefinitionIndex = 83760;

class Class_1_E6CD3AEFAC6BAD7C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_7; // 0x10
	::Class_1_A00B784DE48ED0A8* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::System::Int32 Field_1_5; // 0x24
	::System::Single Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6CD3AEFAC6BAD7C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6CD3AEFAC6BAD7C_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
