#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_AC17C9769683A06E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14180BE0)

inline static constexpr unsigned int Class_1_AC17C9769683A06E_1_TypeDefinitionIndex = 60572;

class Class_1_AC17C9769683A06E_1 : public ::System::Object
{
public:
	::Class_1_FF6C010A7514983E* Base; // 0x10
	::Il2CppArray<::System::String*>* IDs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC17C9769683A06E_1__CTOR_OFFSET))(this);
	}
};
