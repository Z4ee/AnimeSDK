#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF.h"
#include "unitysdk/Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_F2AA3611613B896F.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_154;

#define CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16802ED0)
#define CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C__CTOR_OFFSET UNITYSDK_OFFSET(0x16802FC0)

inline static constexpr unsigned int Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_TypeDefinitionIndex = 86770;

class Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_154<::Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_F2AA3611613B896F>* Field_2_0; // 0x60
	::System::Collections::Generic::Queue_1<::Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
