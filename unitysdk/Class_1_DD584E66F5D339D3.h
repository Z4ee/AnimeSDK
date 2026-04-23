#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46AC29DEBE45F8A8;
class Class_1_508B1A2F4F54A6A6;
class Class_1_B5CB9AB596223833;
class Class_1_C4C2ACF3D9655BEA;
class Class_1_C98B12E65C7C4800;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DD584E66F5D339D3_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x17D4A9E0)
#define CLASS_1_DD584E66F5D339D3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4AAC0)

inline static constexpr unsigned int Class_1_DD584E66F5D339D3_TypeDefinitionIndex = 34057;

class Class_1_DD584E66F5D339D3 : public ::System::Object
{
public:
	::Class_1_C98B12E65C7C4800* Field_1_0; // 0x10
	::Class_1_C4C2ACF3D9655BEA* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B5CB9AB596223833*>* Field_1_4; // 0x20
	::Class_1_508B1A2F4F54A6A6* Field_1_2; // 0x28
	::Class_1_46AC29DEBE45F8A8* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD584E66F5D339D3__CTOR_OFFSET))(this);
	}

	::Class_1_B5CB9AB596223833* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_B5CB9AB596223833*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD584E66F5D339D3_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}
};
