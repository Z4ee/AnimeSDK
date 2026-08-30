#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_93E7EE67D090CF1F_METHOD_1_F08D00B23152A0C0_OFFSET UNITYSDK_OFFSET(0x1E581B00)
#define CLASS_1_93E7EE67D090CF1F_SET_OFFSET UNITYSDK_OFFSET(0x1E589420)
#define CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E582E10)

inline static constexpr unsigned int Class_1_93E7EE67D090CF1F_TypeDefinitionIndex = 34539;

class Class_1_93E7EE67D090CF1F : public ::System::Object
{
public:
	::System::Boolean EEKHKKMMBHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_SET_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F08D00B23152A0C0(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_METHOD_1_F08D00B23152A0C0_OFFSET))(a1);
	}
};
