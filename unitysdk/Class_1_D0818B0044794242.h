#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
namespace System { class Type; }

#define CLASS_1_D0818B0044794242_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xAF35DE0)
#define CLASS_1_D0818B0044794242__CTOR_OFFSET UNITYSDK_OFFSET(0xAF35DD0)

inline static constexpr unsigned int Class_1_D0818B0044794242_TypeDefinitionIndex = 68544;

class Class_1_D0818B0044794242 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_866*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_866*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_866*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0818B0044794242__CTOR_OFFSET))(this, a1);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D0818B0044794242_GETCONTEXT_OFFSET))(this, a1);
	}
};
