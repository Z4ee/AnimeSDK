#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06137EE1D99DE845_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1185D2B0)
#define CLASS_1_06137EE1D99DE845_METHOD_1_CBBAB9DDA4CB6A65_OFFSET UNITYSDK_OFFSET(0x1185D4E0)
#define CLASS_1_06137EE1D99DE845__CTOR_OFFSET UNITYSDK_OFFSET(0x1185D560)

inline static constexpr unsigned int Class_1_06137EE1D99DE845_TypeDefinitionIndex = 54061;

class Class_1_06137EE1D99DE845 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_CBBAB9DDA4CB6A65(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06137EE1D99DE845_METHOD_1_CBBAB9DDA4CB6A65_OFFSET))(a1, a2);
	}
};
