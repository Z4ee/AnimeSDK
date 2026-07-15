#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SerializedWarmupPSO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define CLASS_1_3DF80F278B6BDF72_CLASS_1_2B73F33514AAF796_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1469DF20)
#define CLASS_1_3DF80F278B6BDF72_CLASS_1_2B73F33514AAF796__CTOR_OFFSET UNITYSDK_OFFSET(0x1469B8D0)

inline static constexpr unsigned int Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796_TypeDefinitionIndex = 45633;

class Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::SerializedWarmupPSO*>* Field_1_0; // 0x10
	::UnityEngine::Shader* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_CLASS_1_2B73F33514AAF796__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_CLASS_1_2B73F33514AAF796_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
