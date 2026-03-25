#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_AC17C9769683A06E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA21FB40)

inline static constexpr unsigned int Class_1_AC17C9769683A06E_2_TypeDefinitionIndex = 52599;

class Class_1_AC17C9769683A06E_2 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* IDs; // 0x10
	::Class_1_FF6C010A7514983E* Base; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC17C9769683A06E_2__CTOR_OFFSET))(this);
	}
};
