#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03DCAFA02D8B68F1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1283D010)
#define CLASS_1_03DCAFA02D8B68F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1283D020)

inline static constexpr unsigned int Class_1_03DCAFA02D8B68F1_TypeDefinitionIndex = 69867;

class Class_1_03DCAFA02D8B68F1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
