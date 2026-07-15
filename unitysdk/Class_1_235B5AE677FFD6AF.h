#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7FB1976AEB7689C7.h"
#include "unitysdk/System/Object.h"

class Class_2_9C4E0E0141829F67;
namespace System { class String; }

#define CLASS_1_235B5AE677FFD6AF_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x181944B0)
#define CLASS_1_235B5AE677FFD6AF_METHOD_1_84CD56C90071A654_OFFSET UNITYSDK_OFFSET(0x181946E0)
#define CLASS_1_235B5AE677FFD6AF_METHOD_1_8E2146411BDA73E7_OFFSET UNITYSDK_OFFSET(0x18194500)
#define CLASS_1_235B5AE677FFD6AF__CTOR_OFFSET UNITYSDK_OFFSET(0x181943C0)

inline static constexpr unsigned int Class_1_235B5AE677FFD6AF_TypeDefinitionIndex = 75689;

class Class_1_235B5AE677FFD6AF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_235B5AE677FFD6AF__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235B5AE677FFD6AF_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::Struct_2_7FB1976AEB7689C7 Method_1_84CD56C90071A654(::System::Single a1)
	{
		return ((::Struct_2_7FB1976AEB7689C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_235B5AE677FFD6AF_METHOD_1_84CD56C90071A654_OFFSET))(this, a1);
	}

	static ::Class_2_9C4E0E0141829F67* Method_1_8E2146411BDA73E7(::System::Single a1, ::System::String* a2)
	{
		return ((::Class_2_9C4E0E0141829F67*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_235B5AE677FFD6AF_METHOD_1_8E2146411BDA73E7_OFFSET))(a1, a2);
	}
};
