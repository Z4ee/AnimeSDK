#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B1555FA59A3F87CE_CLASS_1_C4B625EF32CCF1BF_METHOD_1_55796F1F2AE57DBB_OFFSET UNITYSDK_OFFSET(0x10CCCB60)
#define CLASS_2_B1555FA59A3F87CE_CLASS_1_C4B625EF32CCF1BF__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCCB50)

inline static constexpr unsigned int Class_2_B1555FA59A3F87CE_Class_1_C4B625EF32CCF1BF_TypeDefinitionIndex = 50815;

class Class_2_B1555FA59A3F87CE_Class_1_C4B625EF32CCF1BF : public ::System::Object
{
public:
	::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>, ::System::Boolean>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_C4B625EF32CCF1BF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_55796F1F2AE57DBB(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_C4B625EF32CCF1BF_METHOD_1_55796F1F2AE57DBB_OFFSET))(this, a1);
	}
};
