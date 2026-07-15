#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_42;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF82246F32402DDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A0A130)
#define CLASS_1_CF82246F32402DDA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0A1C0)

inline static constexpr unsigned int Class_1_CF82246F32402DDA_TypeDefinitionIndex = 56014;

class Class_1_CF82246F32402DDA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_42*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF82246F32402DDA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF82246F32402DDA_DISPOSE_OFFSET))(this);
	}
};
