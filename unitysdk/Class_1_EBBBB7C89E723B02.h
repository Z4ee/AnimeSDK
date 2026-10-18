#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
namespace System { class Type; }

#define CLASS_1_EBBBB7C89E723B02_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC26DC90)
#define CLASS_1_EBBBB7C89E723B02__CTOR_OFFSET UNITYSDK_OFFSET(0xC26DC80)

inline static constexpr unsigned int Class_1_EBBBB7C89E723B02_TypeDefinitionIndex = 73394;

class Class_1_EBBBB7C89E723B02 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_1059*>* OGHCLELFCDB; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_1059*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_1059*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBB7C89E723B02__CTOR_OFFSET))(this, a1);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBB7C89E723B02_GETCONTEXT_OFFSET))(this, a1);
	}
};
