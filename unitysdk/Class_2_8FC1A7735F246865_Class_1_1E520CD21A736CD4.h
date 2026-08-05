#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8FC1A7735F246865;
class Class_3_8F63A57C1693E5AC_23;
namespace System { class Action; }

#define CLASS_2_8FC1A7735F246865_CLASS_1_1E520CD21A736CD4_METHOD_1_B9A56402214242F9_OFFSET UNITYSDK_OFFSET(0x12C69D00)
#define CLASS_2_8FC1A7735F246865_CLASS_1_1E520CD21A736CD4__CTOR_OFFSET UNITYSDK_OFFSET(0x12C69CF0)

inline static constexpr unsigned int Class_2_8FC1A7735F246865_Class_1_1E520CD21A736CD4_TypeDefinitionIndex = 70881;

class Class_2_8FC1A7735F246865_Class_1_1E520CD21A736CD4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_2_8FC1A7735F246865* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_1E520CD21A736CD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B9A56402214242F9(::Class_3_8F63A57C1693E5AC_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8F63A57C1693E5AC_23*))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_1E520CD21A736CD4_METHOD_1_B9A56402214242F9_OFFSET))(this, a1);
	}
};
