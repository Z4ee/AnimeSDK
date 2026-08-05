#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CF339D0B98B903DF_CLASS_1_8B412270584375F9__CTOR_OFFSET UNITYSDK_OFFSET(0x15945740)

inline static constexpr unsigned int Class_2_CF339D0B98B903DF_Class_1_8B412270584375F9_TypeDefinitionIndex = 54009;

class Class_2_CF339D0B98B903DF_Class_1_8B412270584375F9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF_CLASS_1_8B412270584375F9__CTOR_OFFSET))(this);
	}
};
