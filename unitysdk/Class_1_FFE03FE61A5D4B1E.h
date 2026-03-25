#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_FFE03FE61A5D4B1E__CTOR_OFFSET UNITYSDK_OFFSET(0x10538D80)

inline static constexpr unsigned int Class_1_FFE03FE61A5D4B1E_TypeDefinitionIndex = 55973;

class Class_1_FFE03FE61A5D4B1E : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE03FE61A5D4B1E__CTOR_OFFSET))(this);
	}
};
