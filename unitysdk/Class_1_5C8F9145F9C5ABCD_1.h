#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }

#define CLASS_1_5C8F9145F9C5ABCD_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89ED080)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x89ECF60)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x89ECFD0)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0x89ED020)
#define CLASS_1_5C8F9145F9C5ABCD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x89ECF50)

inline static constexpr unsigned int Class_1_5C8F9145F9C5ABCD_1_TypeDefinitionIndex = 62589;

class Class_1_5C8F9145F9C5ABCD_1 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_C47A6EBDAFAB8B19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_C47A6EBDAFAB8B19_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_DISPOSE_OFFSET))(this);
	}
};
