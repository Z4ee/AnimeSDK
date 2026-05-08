#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DB31062B5932CACE_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B24306FC54525936__CTOR_OFFSET UNITYSDK_OFFSET(0x14429B50)

inline static constexpr unsigned int Class_1_B24306FC54525936_TypeDefinitionIndex = 75861;

class Class_1_B24306FC54525936 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_DB31062B5932CACE_1>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24306FC54525936__CTOR_OFFSET))(this);
	}
};
