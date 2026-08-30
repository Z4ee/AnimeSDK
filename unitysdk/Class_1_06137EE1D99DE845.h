#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06137EE1D99DE845_METHOD_1_CBBAB9DDA4CB6A65_OFFSET UNITYSDK_OFFSET(0x15B17390)
#define CLASS_1_06137EE1D99DE845_METHOD_1_CDC173BAB8695CD3_OFFSET UNITYSDK_OFFSET(0x15B17050)
#define CLASS_1_06137EE1D99DE845__CTOR_OFFSET UNITYSDK_OFFSET(0x15B17410)

inline static constexpr unsigned int Class_1_06137EE1D99DE845_TypeDefinitionIndex = 66499;

class Class_1_06137EE1D99DE845 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_CDC173BAB8695CD3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845_METHOD_1_CDC173BAB8695CD3_OFFSET))();
	}

	static ::System::Void Method_1_CBBAB9DDA4CB6A65(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845_METHOD_1_CBBAB9DDA4CB6A65_OFFSET))(a1, a2);
	}
};
