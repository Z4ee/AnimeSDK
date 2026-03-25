#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C57A7E05540C2DFB_METHOD_1_67F08D1E4227BA89_OFFSET UNITYSDK_OFFSET(0x109EF970)
#define CLASS_1_C57A7E05540C2DFB__CTOR_OFFSET UNITYSDK_OFFSET(0x109EFCD0)

inline static constexpr unsigned int Class_1_C57A7E05540C2DFB_TypeDefinitionIndex = 55408;

class Class_1_C57A7E05540C2DFB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C57A7E05540C2DFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67F08D1E4227BA89(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_C57A7E05540C2DFB_METHOD_1_67F08D1E4227BA89_OFFSET))(this, a1);
	}
};
