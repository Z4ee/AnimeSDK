#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_478F9E5679A12357_METHOD_1_5D452FFAABFC090D_OFFSET UNITYSDK_OFFSET(0x1C57C040)
#define CLASS_1_478F9E5679A12357_METHOD_1_BB229B22BAE508B3_1_OFFSET UNITYSDK_OFFSET(0x1C57C330)
#define CLASS_1_478F9E5679A12357_METHOD_1_BB229B22BAE508B3_OFFSET UNITYSDK_OFFSET(0x1C57C1E0)
#define CLASS_1_478F9E5679A12357_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x1C57BEF0)
#define CLASS_1_478F9E5679A12357__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C030)

inline static constexpr unsigned int Class_1_478F9E5679A12357_TypeDefinitionIndex = 41737;

class Class_1_478F9E5679A12357 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* JFIJOIJKBIH; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_478F9E5679A12357__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EE3CCB3EBB7312F7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_478F9E5679A12357_METHOD_1_EE3CCB3EBB7312F7_OFFSET))(this);
	}

	::System::Int32 Method_1_5D452FFAABFC090D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_478F9E5679A12357_METHOD_1_5D452FFAABFC090D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BB229B22BAE508B3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_478F9E5679A12357_METHOD_1_BB229B22BAE508B3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BB229B22BAE508B3_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_478F9E5679A12357_METHOD_1_BB229B22BAE508B3_1_OFFSET))(this, a1);
	}
};
