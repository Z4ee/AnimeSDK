#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FC304755405BC317.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class ScreenSpaceSplineRenderer;
namespace System { class String; }

#define CLASS_1_EF82F39B528630A4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x120D0C90)
#define CLASS_1_EF82F39B528630A4_METHOD_1_182DB220B54C3248_OFFSET UNITYSDK_OFFSET(0x120D0FC0)
#define CLASS_1_EF82F39B528630A4_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x120D0CE0)
#define CLASS_1_EF82F39B528630A4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x120D1600)
#define CLASS_1_EF82F39B528630A4_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x120D0F60)
#define CLASS_1_EF82F39B528630A4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x120D0CA0)
#define CLASS_1_EF82F39B528630A4__CTOR_OFFSET UNITYSDK_OFFSET(0x120D0FB0)

inline static constexpr unsigned int Class_1_EF82F39B528630A4_TypeDefinitionIndex = 59575;

class Class_1_EF82F39B528630A4 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_2; // 0x0
	::ScreenSpaceSplineRenderer* Field_1_5; // 0x10
	::MoleMole::EntityHandle Field_1_7; // 0x18
	::MoleMole::EntityHandle Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x38
	::System::Boolean Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_FC304755405BC317 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FC304755405BC317))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_182DB220B54C3248(::MoleMole::EntityHandle a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_182DB220B54C3248_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF82F39B528630A4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}
};
