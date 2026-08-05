#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF.h"
#include "unitysdk/Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_F2AA3611613B896F.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_152;

#define CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1906B9A0)
#define CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C__CTOR_OFFSET UNITYSDK_OFFSET(0x1906BAA0)

inline static constexpr unsigned int Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_TypeDefinitionIndex = 85163;

class Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF>* Field_2_0; // 0x80
	::Class_0_16E4307DCC419505_152<::Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_F2AA3611613B896F>* Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980AD78C3BD5BDE0_CLASS_2_582D22303A5D348C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
