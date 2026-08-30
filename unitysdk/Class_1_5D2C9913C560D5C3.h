#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D2C9913C560D5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x105C6FC0)

inline static constexpr unsigned int Class_1_5D2C9913C560D5C3_TypeDefinitionIndex = 48058;

class Class_1_5D2C9913C560D5C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* IFNAGLOMHBK; // 0x10
	::System::Boolean HLEIDANOEIA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D2C9913C560D5C3__CTOR_OFFSET))(this);
	}
};
