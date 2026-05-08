#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D259AF1AA0CDF7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1665B1C0)

inline static constexpr unsigned int Class_1_D259AF1AA0CDF7F3_TypeDefinitionIndex = 71612;

class Class_1_D259AF1AA0CDF7F3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D259AF1AA0CDF7F3__CTOR_OFFSET))(this);
	}
};
