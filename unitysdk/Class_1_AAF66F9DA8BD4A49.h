#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AAF66F9DA8BD4A49_METHOD_1_6BEBCB897EA60343_OFFSET UNITYSDK_OFFSET(0x138DD520)
#define CLASS_1_AAF66F9DA8BD4A49__CTOR_OFFSET UNITYSDK_OFFSET(0x138DD890)

inline static constexpr unsigned int Class_1_AAF66F9DA8BD4A49_TypeDefinitionIndex = 63532;

class Class_1_AAF66F9DA8BD4A49 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF66F9DA8BD4A49__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BEBCB897EA60343(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_AAF66F9DA8BD4A49_METHOD_1_6BEBCB897EA60343_OFFSET))(this, a1);
	}
};
