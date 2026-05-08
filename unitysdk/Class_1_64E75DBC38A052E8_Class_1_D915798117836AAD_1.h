#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64E75DBC38A052E8;
namespace System { class Action; }

#define CLASS_1_64E75DBC38A052E8_CLASS_1_D915798117836AAD_1_METHOD_1_7218E194D924463E_OFFSET UNITYSDK_OFFSET(0x15FED600)
#define CLASS_1_64E75DBC38A052E8_CLASS_1_D915798117836AAD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15FED5F0)

inline static constexpr unsigned int Class_1_64E75DBC38A052E8_Class_1_D915798117836AAD_1_TypeDefinitionIndex = 10726;

class Class_1_64E75DBC38A052E8_Class_1_D915798117836AAD_1 : public ::System::Object
{
public:
	::Class_1_64E75DBC38A052E8* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64E75DBC38A052E8_CLASS_1_D915798117836AAD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7218E194D924463E(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_64E75DBC38A052E8_CLASS_1_D915798117836AAD_1_METHOD_1_7218E194D924463E_OFFSET))(this, a1);
	}
};
