#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_57F17357982CBDC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A499940)

inline static constexpr unsigned int Class_1_57F17357982CBDC4_TypeDefinitionIndex = 40098;

class Class_1_57F17357982CBDC4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57F17357982CBDC4__CTOR_OFFSET))(this);
	}
};
