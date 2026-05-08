#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E9B3FDEEC6142CB3_METHOD_1_F7128E48F7AE6409_OFFSET UNITYSDK_OFFSET(0x161CADB0)
#define CLASS_1_E9B3FDEEC6142CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x161CACD0)

inline static constexpr unsigned int Class_1_E9B3FDEEC6142CB3_TypeDefinitionIndex = 64302;

class Class_1_E9B3FDEEC6142CB3 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E9B3FDEEC6142CB3__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F7128E48F7AE6409()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9B3FDEEC6142CB3_METHOD_1_F7128E48F7AE6409_OFFSET))(this);
	}
};
