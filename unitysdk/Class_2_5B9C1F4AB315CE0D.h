#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class Class_0_16E4307DCC419505_26;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5B9C1F4AB315CE0D_METHOD_2_FA290394C46B1A04_OFFSET UNITYSDK_OFFSET(0x154CCB70)
#define CLASS_2_5B9C1F4AB315CE0D__CTOR_OFFSET UNITYSDK_OFFSET(0x154CCB10)

inline static constexpr unsigned int Class_2_5B9C1F4AB315CE0D_TypeDefinitionIndex = 52206;

class Class_2_5B9C1F4AB315CE0D : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_5B9C1F4AB315CE0D__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_26* Method_2_FA290394C46B1A04()
	{
		return ((::Class_0_16E4307DCC419505_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9C1F4AB315CE0D_METHOD_2_FA290394C46B1A04_OFFSET))(this);
	}
};
