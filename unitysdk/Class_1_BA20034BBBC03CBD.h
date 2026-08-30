#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BA20034BBBC03CBD_METHOD_1_A50ACCB607455BC4_1_OFFSET UNITYSDK_OFFSET(0x19F9A180)
#define CLASS_1_BA20034BBBC03CBD_METHOD_1_A50ACCB607455BC4_OFFSET UNITYSDK_OFFSET(0x19F9A130)
#define CLASS_1_BA20034BBBC03CBD_METHOD_1_D88FAE6C8FC19F00_OFFSET UNITYSDK_OFFSET(0x19F9A1D0)
#define CLASS_1_BA20034BBBC03CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9A220)

inline static constexpr unsigned int Class_1_BA20034BBBC03CBD_TypeDefinitionIndex = 50070;

class Class_1_BA20034BBBC03CBD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA20034BBBC03CBD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A50ACCB607455BC4(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA20034BBBC03CBD_METHOD_1_A50ACCB607455BC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A50ACCB607455BC4_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA20034BBBC03CBD_METHOD_1_A50ACCB607455BC4_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D88FAE6C8FC19F00(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA20034BBBC03CBD_METHOD_1_D88FAE6C8FC19F00_OFFSET))(a1, a2);
	}
};
