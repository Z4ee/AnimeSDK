#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5CFE684023F165BE.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CEC585D0736F3660__CTOR_OFFSET UNITYSDK_OFFSET(0x18B28690)

inline static constexpr unsigned int Class_2_CEC585D0736F3660_TypeDefinitionIndex = 87546;

class Class_2_CEC585D0736F3660 : public ::Class_1_5CFE684023F165BE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC585D0736F3660__CTOR_OFFSET))(this);
	}
};
