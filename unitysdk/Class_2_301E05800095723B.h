#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_301E05800095723B__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDA330)

inline static constexpr unsigned int Class_2_301E05800095723B_TypeDefinitionIndex = 55296;

class Class_2_301E05800095723B : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301E05800095723B__CTOR_OFFSET))(this);
	}
};
