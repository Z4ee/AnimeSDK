#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_0226021C47BF7B15_METHOD_1_7D07FDE8C7A57691_OFFSET UNITYSDK_OFFSET(0x1EC3FB70)
#define CLASS_1_0226021C47BF7B15_SET_OFFSET UNITYSDK_OFFSET(0x1EC3F990)
#define CLASS_1_0226021C47BF7B15__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3FBF0)

inline static constexpr unsigned int Class_1_0226021C47BF7B15_TypeDefinitionIndex = 35212;

class Class_1_0226021C47BF7B15 : public ::System::Object
{
public:
	::System::String* BGBBNIDJOII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0226021C47BF7B15__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0226021C47BF7B15_SET_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_7D07FDE8C7A57691(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_0226021C47BF7B15_METHOD_1_7D07FDE8C7A57691_OFFSET))(a1);
	}
};
