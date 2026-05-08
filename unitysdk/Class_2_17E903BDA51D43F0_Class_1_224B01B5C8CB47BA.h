#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_17E903BDA51D43F0;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xFF28170)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xFF27FD0)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_4D82420476E6367C_OFFSET UNITYSDK_OFFSET(0xFF28010)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xFF28160)
#define CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF27FC0)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Class_1_224B01B5C8CB47BA_TypeDefinitionIndex = 46700;

class Class_2_17E903BDA51D43F0_Class_1_224B01B5C8CB47BA : public ::System::Object
{
public:
	::Class_2_17E903BDA51D43F0* Field_1_4; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x18
	::MoleMole::MonoGamepadVirtualCursor* Field_1_6; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_1_4D82420476E6367C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_4D82420476E6367C_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_1_224B01B5C8CB47BA_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}
};
