#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE2AC6C9C34CBBD2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186__CTOR_OFFSET UNITYSDK_OFFSET(0x17B14A60)

inline static constexpr unsigned int Class_1_E0231B607CD65186_TypeDefinitionIndex = 37752;

class Class_1_E0231B607CD65186 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_CE2AC6C9C34CBBD2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186__CTOR_OFFSET))(this);
	}
};
