#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5CFE684023F165BE__CTOR_OFFSET UNITYSDK_OFFSET(0x167CB9B0)

inline static constexpr unsigned int Class_1_5CFE684023F165BE_TypeDefinitionIndex = 76968;

class Class_1_5CFE684023F165BE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFE684023F165BE__CTOR_OFFSET))(this);
	}
};
