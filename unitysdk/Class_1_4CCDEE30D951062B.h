#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_4CCDEE30D951062B_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x176F23C0)
#define CLASS_1_4CCDEE30D951062B__CTOR_OFFSET UNITYSDK_OFFSET(0x176F2440)

inline static constexpr unsigned int Class_1_4CCDEE30D951062B_TypeDefinitionIndex = 70042;

class Class_1_4CCDEE30D951062B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCDEE30D951062B__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_4CCDEE30D951062B_GETCONTEXT_OFFSET))(this, a1);
	}
};
