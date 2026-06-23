#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F54B131B7ABDC947__CTOR_OFFSET UNITYSDK_OFFSET(0x125B01E0)

inline static constexpr unsigned int Class_1_F54B131B7ABDC947_TypeDefinitionIndex = 72312;

class Class_1_F54B131B7ABDC947 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F54B131B7ABDC947__CTOR_OFFSET))(this);
	}
};
